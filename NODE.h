class NODE{
      int size;
      NODE* next;
public:
        NODE(int);
        virtual void show_node();//class พ่อแม่
        void insert(NODE*&);
        NODE* move_next();
        int krand();
        virtual ~NODE();
      };
