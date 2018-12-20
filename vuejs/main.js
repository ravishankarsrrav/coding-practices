(function () {
let data = {
	newName : '',
	names : [{'name' : 'hi','age' : '24'},{'name' : 'heee','age' : '29'}]
	
};
let app = new Vue({
	el : '#root',
	data : data,
	mounted(){
		
	},
	computed:{
		greater(){
			return this.names.filter(name => name.age > 24);

		}
	}
	
});

})();
