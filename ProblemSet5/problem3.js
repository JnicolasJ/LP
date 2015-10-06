var x = 1;
var y = 2;
//variable locales

function fun1(){
	var z = 3;//variable local
	//variables x, y
	
	function fun2(){
	var w =4;//variable local
	//variables z
	//variables x, y
	
		function fun3(){
			var t =5;//variable local
			//variable w
			//variable z
			//variable x,y
		}
	}

}