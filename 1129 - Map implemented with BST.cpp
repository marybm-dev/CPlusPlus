template <typename T>
struct MapNode
{
    string key;
    T value;
    MapNode<T>(string k="", T item=T()) : key(k), value(item) { }
    bool operator==(MapNode other)
    {
        return (key == other.key);
    }
    bool operator<(MapNode other)
    {
        return (key < other.key);
    }
};

template <typename T>
class CS20Map
{
    private:
        SearchTree<MapNode<T> > tree; // extra space required!
    public:
        CS20Map() { }
        void Put(string key, T value)
        {
            MapNode<T> node(key, value);
            tree.Add(node);
        }
        T Get(string key)
        {
            
        }
        bool ContainsKey(string key)
        {
            
        }
        void Remove(string key)
        {
            
        }
};

}
