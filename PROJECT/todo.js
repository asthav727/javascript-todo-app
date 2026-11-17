let todoList = [{
    item:'milk',
    duedate:'13/10/29'
},
{
    item:'cake',
    duedate:'12/10/29'
}
];

displayItems();

function AddTodo() {
    let inputElement = document.querySelector('#todo-input');
    let dateElement = document.querySelector('#todo-date');

    let todoItem = inputElement.value;
    let tododate=dateElement.value;

    

    todoList.push({item:todoItem,duedate:tododate});

    inputElement.value = '';
    dateElement.value=' ';

    displayItems();
}

function displayItems() {
    let containerElement = document.querySelector('.todo-container');
    let newhTML='';
    for (let i = 0; i < todoList.length; i++) {
        let {item,duedate}=todoList[i];


       newhTML+=`
      
        <span>${item}</span>
        <span>${duedate}</span>
        <button class="button-delete" onClick="todoList.splice(${i},1);
        displayItems();">Delete</button>
        
        `;
    }

    containerElement.innerHTML=newhTML;
}