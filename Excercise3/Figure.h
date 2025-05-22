#pragma once

class Figure 
{
    protected:
        std::string name;  
        int sides_count; 

    public:
        std::string get_name() const;
        int get_sides_count() const;
        virtual void print_info() const = 0;  
        virtual ~Figure() = default;  
};
