namespace dheeraj{
	
	template <typename T, typename U>
	class my_pair{
		
		public:
			T detail1;
			U detail2;
			
			my_pair(T d1, U d2): detail1(d1), detail2(d2) {}
			
			void print(){
				
				std::cout<<"Detail: "<< detail1 <<std::endl;
				std::cout<<"Detail: "<< detail2 <<std::endl;
			}
	};
	
}
