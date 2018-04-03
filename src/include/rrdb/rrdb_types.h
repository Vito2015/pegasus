/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef rrdb_TYPES_H
#define rrdb_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include <dsn/service_api_cpp.h>

namespace dsn {
namespace apps {

struct filter_type
{
    enum type
    {
        FT_NO_FILTER = 0,
        FT_MATCH_ANYWHERE = 1,
        FT_MATCH_PREFIX = 2,
        FT_MATCH_POSTFIX = 3
    };
};

extern const std::map<int, const char *> _filter_type_VALUES_TO_NAMES;

class update_request;

class update_response;

class read_response;

class ttl_response;

class count_response;

class key_value;

class multi_put_request;

class multi_remove_request;

class multi_remove_response;

class multi_get_request;

class multi_get_response;

class incr_request;

class get_scanner_request;

class scan_request;

class scan_response;

class duplicate_request;

class duplicate_response;

typedef struct _update_request__isset
{
    _update_request__isset() : key(false), value(false), expire_ts_seconds(false) {}
    bool key : 1;
    bool value : 1;
    bool expire_ts_seconds : 1;
} _update_request__isset;

class update_request
{
public:
    update_request(const update_request &);
    update_request(update_request &&);
    update_request &operator=(const update_request &);
    update_request &operator=(update_request &&);
    update_request() : expire_ts_seconds(0) {}

    virtual ~update_request() throw();
    ::dsn::blob key;
    ::dsn::blob value;
    int32_t expire_ts_seconds;

    _update_request__isset __isset;

    void __set_key(const ::dsn::blob &val);

    void __set_value(const ::dsn::blob &val);

    void __set_expire_ts_seconds(const int32_t val);

    bool operator==(const update_request &rhs) const
    {
        if (!(key == rhs.key))
            return false;
        if (!(value == rhs.value))
            return false;
        if (!(expire_ts_seconds == rhs.expire_ts_seconds))
            return false;
        return true;
    }
    bool operator!=(const update_request &rhs) const { return !(*this == rhs); }

    bool operator<(const update_request &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(update_request &a, update_request &b);

inline std::ostream &operator<<(std::ostream &out, const update_request &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _update_response__isset
{
    _update_response__isset()
        : error(false), app_id(false), partition_index(false), decree(false), server(false)
    {
    }
    bool error : 1;
    bool app_id : 1;
    bool partition_index : 1;
    bool decree : 1;
    bool server : 1;
} _update_response__isset;

class update_response
{
public:
    update_response(const update_response &);
    update_response(update_response &&);
    update_response &operator=(const update_response &);
    update_response &operator=(update_response &&);
    update_response() : error(0), app_id(0), partition_index(0), decree(0), server() {}

    virtual ~update_response() throw();
    int32_t error;
    int32_t app_id;
    int32_t partition_index;
    int64_t decree;
    std::string server;

    _update_response__isset __isset;

    void __set_error(const int32_t val);

    void __set_app_id(const int32_t val);

    void __set_partition_index(const int32_t val);

    void __set_decree(const int64_t val);

    void __set_server(const std::string &val);

    bool operator==(const update_response &rhs) const
    {
        if (!(error == rhs.error))
            return false;
        if (!(app_id == rhs.app_id))
            return false;
        if (!(partition_index == rhs.partition_index))
            return false;
        if (!(decree == rhs.decree))
            return false;
        if (!(server == rhs.server))
            return false;
        return true;
    }
    bool operator!=(const update_response &rhs) const { return !(*this == rhs); }

    bool operator<(const update_response &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(update_response &a, update_response &b);

inline std::ostream &operator<<(std::ostream &out, const update_response &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _read_response__isset
{
    _read_response__isset()
        : error(false), value(false), app_id(false), partition_index(false), server(false)
    {
    }
    bool error : 1;
    bool value : 1;
    bool app_id : 1;
    bool partition_index : 1;
    bool server : 1;
} _read_response__isset;

class read_response
{
public:
    read_response(const read_response &);
    read_response(read_response &&);
    read_response &operator=(const read_response &);
    read_response &operator=(read_response &&);
    read_response() : error(0), app_id(0), partition_index(0), server() {}

    virtual ~read_response() throw();
    int32_t error;
    ::dsn::blob value;
    int32_t app_id;
    int32_t partition_index;
    std::string server;

    _read_response__isset __isset;

    void __set_error(const int32_t val);

    void __set_value(const ::dsn::blob &val);

    void __set_app_id(const int32_t val);

    void __set_partition_index(const int32_t val);

    void __set_server(const std::string &val);

    bool operator==(const read_response &rhs) const
    {
        if (!(error == rhs.error))
            return false;
        if (!(value == rhs.value))
            return false;
        if (!(app_id == rhs.app_id))
            return false;
        if (!(partition_index == rhs.partition_index))
            return false;
        if (!(server == rhs.server))
            return false;
        return true;
    }
    bool operator!=(const read_response &rhs) const { return !(*this == rhs); }

    bool operator<(const read_response &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(read_response &a, read_response &b);

inline std::ostream &operator<<(std::ostream &out, const read_response &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _ttl_response__isset
{
    _ttl_response__isset()
        : error(false), ttl_seconds(false), app_id(false), partition_index(false), server(false)
    {
    }
    bool error : 1;
    bool ttl_seconds : 1;
    bool app_id : 1;
    bool partition_index : 1;
    bool server : 1;
} _ttl_response__isset;

class ttl_response
{
public:
    ttl_response(const ttl_response &);
    ttl_response(ttl_response &&);
    ttl_response &operator=(const ttl_response &);
    ttl_response &operator=(ttl_response &&);
    ttl_response() : error(0), ttl_seconds(0), app_id(0), partition_index(0), server() {}

    virtual ~ttl_response() throw();
    int32_t error;
    int32_t ttl_seconds;
    int32_t app_id;
    int32_t partition_index;
    std::string server;

    _ttl_response__isset __isset;

    void __set_error(const int32_t val);

    void __set_ttl_seconds(const int32_t val);

    void __set_app_id(const int32_t val);

    void __set_partition_index(const int32_t val);

    void __set_server(const std::string &val);

    bool operator==(const ttl_response &rhs) const
    {
        if (!(error == rhs.error))
            return false;
        if (!(ttl_seconds == rhs.ttl_seconds))
            return false;
        if (!(app_id == rhs.app_id))
            return false;
        if (!(partition_index == rhs.partition_index))
            return false;
        if (!(server == rhs.server))
            return false;
        return true;
    }
    bool operator!=(const ttl_response &rhs) const { return !(*this == rhs); }

    bool operator<(const ttl_response &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(ttl_response &a, ttl_response &b);

inline std::ostream &operator<<(std::ostream &out, const ttl_response &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _count_response__isset
{
    _count_response__isset()
        : error(false), count(false), app_id(false), partition_index(false), server(false)
    {
    }
    bool error : 1;
    bool count : 1;
    bool app_id : 1;
    bool partition_index : 1;
    bool server : 1;
} _count_response__isset;

class count_response
{
public:
    count_response(const count_response &);
    count_response(count_response &&);
    count_response &operator=(const count_response &);
    count_response &operator=(count_response &&);
    count_response() : error(0), count(0), app_id(0), partition_index(0), server() {}

    virtual ~count_response() throw();
    int32_t error;
    int64_t count;
    int32_t app_id;
    int32_t partition_index;
    std::string server;

    _count_response__isset __isset;

    void __set_error(const int32_t val);

    void __set_count(const int64_t val);

    void __set_app_id(const int32_t val);

    void __set_partition_index(const int32_t val);

    void __set_server(const std::string &val);

    bool operator==(const count_response &rhs) const
    {
        if (!(error == rhs.error))
            return false;
        if (!(count == rhs.count))
            return false;
        if (!(app_id == rhs.app_id))
            return false;
        if (!(partition_index == rhs.partition_index))
            return false;
        if (!(server == rhs.server))
            return false;
        return true;
    }
    bool operator!=(const count_response &rhs) const { return !(*this == rhs); }

    bool operator<(const count_response &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(count_response &a, count_response &b);

inline std::ostream &operator<<(std::ostream &out, const count_response &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _key_value__isset
{
    _key_value__isset() : key(false), value(false) {}
    bool key : 1;
    bool value : 1;
} _key_value__isset;

class key_value
{
public:
    key_value(const key_value &);
    key_value(key_value &&);
    key_value &operator=(const key_value &);
    key_value &operator=(key_value &&);
    key_value() {}

    virtual ~key_value() throw();
    ::dsn::blob key;
    ::dsn::blob value;

    _key_value__isset __isset;

    void __set_key(const ::dsn::blob &val);

    void __set_value(const ::dsn::blob &val);

    bool operator==(const key_value &rhs) const
    {
        if (!(key == rhs.key))
            return false;
        if (!(value == rhs.value))
            return false;
        return true;
    }
    bool operator!=(const key_value &rhs) const { return !(*this == rhs); }

    bool operator<(const key_value &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(key_value &a, key_value &b);

inline std::ostream &operator<<(std::ostream &out, const key_value &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _multi_put_request__isset
{
    _multi_put_request__isset() : hash_key(false), kvs(false), expire_ts_seconds(false) {}
    bool hash_key : 1;
    bool kvs : 1;
    bool expire_ts_seconds : 1;
} _multi_put_request__isset;

class multi_put_request
{
public:
    multi_put_request(const multi_put_request &);
    multi_put_request(multi_put_request &&);
    multi_put_request &operator=(const multi_put_request &);
    multi_put_request &operator=(multi_put_request &&);
    multi_put_request() : expire_ts_seconds(0) {}

    virtual ~multi_put_request() throw();
    ::dsn::blob hash_key;
    std::vector<key_value> kvs;
    int32_t expire_ts_seconds;

    _multi_put_request__isset __isset;

    void __set_hash_key(const ::dsn::blob &val);

    void __set_kvs(const std::vector<key_value> &val);

    void __set_expire_ts_seconds(const int32_t val);

    bool operator==(const multi_put_request &rhs) const
    {
        if (!(hash_key == rhs.hash_key))
            return false;
        if (!(kvs == rhs.kvs))
            return false;
        if (!(expire_ts_seconds == rhs.expire_ts_seconds))
            return false;
        return true;
    }
    bool operator!=(const multi_put_request &rhs) const { return !(*this == rhs); }

    bool operator<(const multi_put_request &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(multi_put_request &a, multi_put_request &b);

inline std::ostream &operator<<(std::ostream &out, const multi_put_request &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _multi_remove_request__isset
{
    _multi_remove_request__isset() : hash_key(false), sort_keys(false), max_count(false) {}
    bool hash_key : 1;
    bool sort_keys : 1;
    bool max_count : 1;
} _multi_remove_request__isset;

class multi_remove_request
{
public:
    multi_remove_request(const multi_remove_request &);
    multi_remove_request(multi_remove_request &&);
    multi_remove_request &operator=(const multi_remove_request &);
    multi_remove_request &operator=(multi_remove_request &&);
    multi_remove_request() : max_count(0) {}

    virtual ~multi_remove_request() throw();
    ::dsn::blob hash_key;
    std::vector<::dsn::blob> sort_keys;
    int64_t max_count;

    _multi_remove_request__isset __isset;

    void __set_hash_key(const ::dsn::blob &val);

    void __set_sort_keys(const std::vector<::dsn::blob> &val);

    void __set_max_count(const int64_t val);

    bool operator==(const multi_remove_request &rhs) const
    {
        if (!(hash_key == rhs.hash_key))
            return false;
        if (!(sort_keys == rhs.sort_keys))
            return false;
        if (!(max_count == rhs.max_count))
            return false;
        return true;
    }
    bool operator!=(const multi_remove_request &rhs) const { return !(*this == rhs); }

    bool operator<(const multi_remove_request &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(multi_remove_request &a, multi_remove_request &b);

inline std::ostream &operator<<(std::ostream &out, const multi_remove_request &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _multi_remove_response__isset
{
    _multi_remove_response__isset()
        : error(false),
          count(false),
          app_id(false),
          partition_index(false),
          decree(false),
          server(false)
    {
    }
    bool error : 1;
    bool count : 1;
    bool app_id : 1;
    bool partition_index : 1;
    bool decree : 1;
    bool server : 1;
} _multi_remove_response__isset;

class multi_remove_response
{
public:
    multi_remove_response(const multi_remove_response &);
    multi_remove_response(multi_remove_response &&);
    multi_remove_response &operator=(const multi_remove_response &);
    multi_remove_response &operator=(multi_remove_response &&);
    multi_remove_response() : error(0), count(0), app_id(0), partition_index(0), decree(0), server()
    {
    }

    virtual ~multi_remove_response() throw();
    int32_t error;
    int64_t count;
    int32_t app_id;
    int32_t partition_index;
    int64_t decree;
    std::string server;

    _multi_remove_response__isset __isset;

    void __set_error(const int32_t val);

    void __set_count(const int64_t val);

    void __set_app_id(const int32_t val);

    void __set_partition_index(const int32_t val);

    void __set_decree(const int64_t val);

    void __set_server(const std::string &val);

    bool operator==(const multi_remove_response &rhs) const
    {
        if (!(error == rhs.error))
            return false;
        if (!(count == rhs.count))
            return false;
        if (!(app_id == rhs.app_id))
            return false;
        if (!(partition_index == rhs.partition_index))
            return false;
        if (!(decree == rhs.decree))
            return false;
        if (!(server == rhs.server))
            return false;
        return true;
    }
    bool operator!=(const multi_remove_response &rhs) const { return !(*this == rhs); }

    bool operator<(const multi_remove_response &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(multi_remove_response &a, multi_remove_response &b);

inline std::ostream &operator<<(std::ostream &out, const multi_remove_response &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _multi_get_request__isset
{
    _multi_get_request__isset()
        : hash_key(false),
          sort_keys(false),
          max_kv_count(false),
          max_kv_size(false),
          no_value(false),
          start_sortkey(false),
          stop_sortkey(false),
          start_inclusive(false),
          stop_inclusive(false),
          sort_key_filter_type(false),
          sort_key_filter_pattern(false),
          reverse(false)
    {
    }
    bool hash_key : 1;
    bool sort_keys : 1;
    bool max_kv_count : 1;
    bool max_kv_size : 1;
    bool no_value : 1;
    bool start_sortkey : 1;
    bool stop_sortkey : 1;
    bool start_inclusive : 1;
    bool stop_inclusive : 1;
    bool sort_key_filter_type : 1;
    bool sort_key_filter_pattern : 1;
    bool reverse : 1;
} _multi_get_request__isset;

class multi_get_request
{
public:
    multi_get_request(const multi_get_request &);
    multi_get_request(multi_get_request &&);
    multi_get_request &operator=(const multi_get_request &);
    multi_get_request &operator=(multi_get_request &&);
    multi_get_request()
        : max_kv_count(0),
          max_kv_size(0),
          no_value(0),
          start_inclusive(0),
          stop_inclusive(0),
          sort_key_filter_type((filter_type::type)0),
          reverse(0)
    {
    }

    virtual ~multi_get_request() throw();
    ::dsn::blob hash_key;
    std::vector<::dsn::blob> sort_keys;
    int32_t max_kv_count;
    int32_t max_kv_size;
    bool no_value;
    ::dsn::blob start_sortkey;
    ::dsn::blob stop_sortkey;
    bool start_inclusive;
    bool stop_inclusive;
    filter_type::type sort_key_filter_type;
    ::dsn::blob sort_key_filter_pattern;
    bool reverse;

    _multi_get_request__isset __isset;

    void __set_hash_key(const ::dsn::blob &val);

    void __set_sort_keys(const std::vector<::dsn::blob> &val);

    void __set_max_kv_count(const int32_t val);

    void __set_max_kv_size(const int32_t val);

    void __set_no_value(const bool val);

    void __set_start_sortkey(const ::dsn::blob &val);

    void __set_stop_sortkey(const ::dsn::blob &val);

    void __set_start_inclusive(const bool val);

    void __set_stop_inclusive(const bool val);

    void __set_sort_key_filter_type(const filter_type::type val);

    void __set_sort_key_filter_pattern(const ::dsn::blob &val);

    void __set_reverse(const bool val);

    bool operator==(const multi_get_request &rhs) const
    {
        if (!(hash_key == rhs.hash_key))
            return false;
        if (!(sort_keys == rhs.sort_keys))
            return false;
        if (!(max_kv_count == rhs.max_kv_count))
            return false;
        if (!(max_kv_size == rhs.max_kv_size))
            return false;
        if (!(no_value == rhs.no_value))
            return false;
        if (!(start_sortkey == rhs.start_sortkey))
            return false;
        if (!(stop_sortkey == rhs.stop_sortkey))
            return false;
        if (!(start_inclusive == rhs.start_inclusive))
            return false;
        if (!(stop_inclusive == rhs.stop_inclusive))
            return false;
        if (!(sort_key_filter_type == rhs.sort_key_filter_type))
            return false;
        if (!(sort_key_filter_pattern == rhs.sort_key_filter_pattern))
            return false;
        if (!(reverse == rhs.reverse))
            return false;
        return true;
    }
    bool operator!=(const multi_get_request &rhs) const { return !(*this == rhs); }

    bool operator<(const multi_get_request &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(multi_get_request &a, multi_get_request &b);

inline std::ostream &operator<<(std::ostream &out, const multi_get_request &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _multi_get_response__isset
{
    _multi_get_response__isset()
        : error(false), kvs(false), app_id(false), partition_index(false), server(false)
    {
    }
    bool error : 1;
    bool kvs : 1;
    bool app_id : 1;
    bool partition_index : 1;
    bool server : 1;
} _multi_get_response__isset;

class multi_get_response
{
public:
    multi_get_response(const multi_get_response &);
    multi_get_response(multi_get_response &&);
    multi_get_response &operator=(const multi_get_response &);
    multi_get_response &operator=(multi_get_response &&);
    multi_get_response() : error(0), app_id(0), partition_index(0), server() {}

    virtual ~multi_get_response() throw();
    int32_t error;
    std::vector<key_value> kvs;
    int32_t app_id;
    int32_t partition_index;
    std::string server;

    _multi_get_response__isset __isset;

    void __set_error(const int32_t val);

    void __set_kvs(const std::vector<key_value> &val);

    void __set_app_id(const int32_t val);

    void __set_partition_index(const int32_t val);

    void __set_server(const std::string &val);

    bool operator==(const multi_get_response &rhs) const
    {
        if (!(error == rhs.error))
            return false;
        if (!(kvs == rhs.kvs))
            return false;
        if (!(app_id == rhs.app_id))
            return false;
        if (!(partition_index == rhs.partition_index))
            return false;
        if (!(server == rhs.server))
            return false;
        return true;
    }
    bool operator!=(const multi_get_response &rhs) const { return !(*this == rhs); }

    bool operator<(const multi_get_response &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(multi_get_response &a, multi_get_response &b);

inline std::ostream &operator<<(std::ostream &out, const multi_get_response &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _incr_request__isset
{
    _incr_request__isset() : key(false), increment(false) {}
    bool key : 1;
    bool increment : 1;
} _incr_request__isset;

class incr_request
{
public:
    incr_request(const incr_request &);
    incr_request(incr_request &&);
    incr_request &operator=(const incr_request &);
    incr_request &operator=(incr_request &&);
    incr_request() : increment(0) {}

    virtual ~incr_request() throw();
    ::dsn::blob key;
    int64_t increment;

    _incr_request__isset __isset;

    void __set_key(const ::dsn::blob &val);

    void __set_increment(const int64_t val);

    bool operator==(const incr_request &rhs) const
    {
        if (!(key == rhs.key))
            return false;
        if (!(increment == rhs.increment))
            return false;
        return true;
    }
    bool operator!=(const incr_request &rhs) const { return !(*this == rhs); }

    bool operator<(const incr_request &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(incr_request &a, incr_request &b);

inline std::ostream &operator<<(std::ostream &out, const incr_request &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _get_scanner_request__isset
{
    _get_scanner_request__isset()
        : start_key(false),
          stop_key(false),
          start_inclusive(false),
          stop_inclusive(false),
          batch_size(false),
          no_value(false),
          hash_key_filter_type(false),
          hash_key_filter_pattern(false),
          sort_key_filter_type(false),
          sort_key_filter_pattern(false)
    {
    }
    bool start_key : 1;
    bool stop_key : 1;
    bool start_inclusive : 1;
    bool stop_inclusive : 1;
    bool batch_size : 1;
    bool no_value : 1;
    bool hash_key_filter_type : 1;
    bool hash_key_filter_pattern : 1;
    bool sort_key_filter_type : 1;
    bool sort_key_filter_pattern : 1;
} _get_scanner_request__isset;

class get_scanner_request
{
public:
    get_scanner_request(const get_scanner_request &);
    get_scanner_request(get_scanner_request &&);
    get_scanner_request &operator=(const get_scanner_request &);
    get_scanner_request &operator=(get_scanner_request &&);
    get_scanner_request()
        : start_inclusive(0),
          stop_inclusive(0),
          batch_size(0),
          no_value(0),
          hash_key_filter_type((filter_type::type)0),
          sort_key_filter_type((filter_type::type)0)
    {
    }

    virtual ~get_scanner_request() throw();
    ::dsn::blob start_key;
    ::dsn::blob stop_key;
    bool start_inclusive;
    bool stop_inclusive;
    int32_t batch_size;
    bool no_value;
    filter_type::type hash_key_filter_type;
    ::dsn::blob hash_key_filter_pattern;
    filter_type::type sort_key_filter_type;
    ::dsn::blob sort_key_filter_pattern;

    _get_scanner_request__isset __isset;

    void __set_start_key(const ::dsn::blob &val);

    void __set_stop_key(const ::dsn::blob &val);

    void __set_start_inclusive(const bool val);

    void __set_stop_inclusive(const bool val);

    void __set_batch_size(const int32_t val);

    void __set_no_value(const bool val);

    void __set_hash_key_filter_type(const filter_type::type val);

    void __set_hash_key_filter_pattern(const ::dsn::blob &val);

    void __set_sort_key_filter_type(const filter_type::type val);

    void __set_sort_key_filter_pattern(const ::dsn::blob &val);

    bool operator==(const get_scanner_request &rhs) const
    {
        if (!(start_key == rhs.start_key))
            return false;
        if (!(stop_key == rhs.stop_key))
            return false;
        if (!(start_inclusive == rhs.start_inclusive))
            return false;
        if (!(stop_inclusive == rhs.stop_inclusive))
            return false;
        if (!(batch_size == rhs.batch_size))
            return false;
        if (!(no_value == rhs.no_value))
            return false;
        if (!(hash_key_filter_type == rhs.hash_key_filter_type))
            return false;
        if (!(hash_key_filter_pattern == rhs.hash_key_filter_pattern))
            return false;
        if (!(sort_key_filter_type == rhs.sort_key_filter_type))
            return false;
        if (!(sort_key_filter_pattern == rhs.sort_key_filter_pattern))
            return false;
        return true;
    }
    bool operator!=(const get_scanner_request &rhs) const { return !(*this == rhs); }

    bool operator<(const get_scanner_request &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(get_scanner_request &a, get_scanner_request &b);

inline std::ostream &operator<<(std::ostream &out, const get_scanner_request &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _scan_request__isset
{
    _scan_request__isset() : context_id(false) {}
    bool context_id : 1;
} _scan_request__isset;

class scan_request
{
public:
    scan_request(const scan_request &);
    scan_request(scan_request &&);
    scan_request &operator=(const scan_request &);
    scan_request &operator=(scan_request &&);
    scan_request() : context_id(0) {}

    virtual ~scan_request() throw();
    int64_t context_id;

    _scan_request__isset __isset;

    void __set_context_id(const int64_t val);

    bool operator==(const scan_request &rhs) const
    {
        if (!(context_id == rhs.context_id))
            return false;
        return true;
    }
    bool operator!=(const scan_request &rhs) const { return !(*this == rhs); }

    bool operator<(const scan_request &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(scan_request &a, scan_request &b);

inline std::ostream &operator<<(std::ostream &out, const scan_request &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _scan_response__isset
{
    _scan_response__isset()
        : error(false),
          kvs(false),
          context_id(false),
          app_id(false),
          partition_index(false),
          server(false)
    {
    }
    bool error : 1;
    bool kvs : 1;
    bool context_id : 1;
    bool app_id : 1;
    bool partition_index : 1;
    bool server : 1;
} _scan_response__isset;

class scan_response
{
public:
    scan_response(const scan_response &);
    scan_response(scan_response &&);
    scan_response &operator=(const scan_response &);
    scan_response &operator=(scan_response &&);
    scan_response() : error(0), context_id(0), app_id(0), partition_index(0), server() {}

    virtual ~scan_response() throw();
    int32_t error;
    std::vector<key_value> kvs;
    int64_t context_id;
    int32_t app_id;
    int32_t partition_index;
    std::string server;

    _scan_response__isset __isset;

    void __set_error(const int32_t val);

    void __set_kvs(const std::vector<key_value> &val);

    void __set_context_id(const int64_t val);

    void __set_app_id(const int32_t val);

    void __set_partition_index(const int32_t val);

    void __set_server(const std::string &val);

    bool operator==(const scan_response &rhs) const
    {
        if (!(error == rhs.error))
            return false;
        if (!(kvs == rhs.kvs))
            return false;
        if (!(context_id == rhs.context_id))
            return false;
        if (!(app_id == rhs.app_id))
            return false;
        if (!(partition_index == rhs.partition_index))
            return false;
        if (!(server == rhs.server))
            return false;
        return true;
    }
    bool operator!=(const scan_response &rhs) const { return !(*this == rhs); }

    bool operator<(const scan_response &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(scan_response &a, scan_response &b);

inline std::ostream &operator<<(std::ostream &out, const scan_response &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _duplicate_request__isset
{
    _duplicate_request__isset() : timetag(false), task_code(false), raw_message(false) {}
    bool timetag : 1;
    bool task_code : 1;
    bool raw_message : 1;
} _duplicate_request__isset;

class duplicate_request
{
public:
    duplicate_request(const duplicate_request &);
    duplicate_request(duplicate_request &&);
    duplicate_request &operator=(const duplicate_request &);
    duplicate_request &operator=(duplicate_request &&);
    duplicate_request() : timetag(0) {}

    virtual ~duplicate_request() throw();
    int64_t timetag;
    ::dsn::task_code task_code;
    ::dsn::blob raw_message;

    _duplicate_request__isset __isset;

    void __set_timetag(const int64_t val);

    void __set_task_code(const ::dsn::task_code &val);

    void __set_raw_message(const ::dsn::blob &val);

    bool operator==(const duplicate_request &rhs) const
    {
        if (!(timetag == rhs.timetag))
            return false;
        if (!(task_code == rhs.task_code))
            return false;
        if (!(raw_message == rhs.raw_message))
            return false;
        return true;
    }
    bool operator!=(const duplicate_request &rhs) const { return !(*this == rhs); }

    bool operator<(const duplicate_request &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(duplicate_request &a, duplicate_request &b);

inline std::ostream &operator<<(std::ostream &out, const duplicate_request &obj)
{
    obj.printTo(out);
    return out;
}

typedef struct _duplicate_response__isset
{
    _duplicate_response__isset() : error(false) {}
    bool error : 1;
} _duplicate_response__isset;

class duplicate_response
{
public:
    duplicate_response(const duplicate_response &);
    duplicate_response(duplicate_response &&);
    duplicate_response &operator=(const duplicate_response &);
    duplicate_response &operator=(duplicate_response &&);
    duplicate_response() : error(0) {}

    virtual ~duplicate_response() throw();
    int32_t error;

    _duplicate_response__isset __isset;

    void __set_error(const int32_t val);

    bool operator==(const duplicate_response &rhs) const
    {
        if (!(error == rhs.error))
            return false;
        return true;
    }
    bool operator!=(const duplicate_response &rhs) const { return !(*this == rhs); }

    bool operator<(const duplicate_response &) const;

    uint32_t read(::apache::thrift::protocol::TProtocol *iprot);
    uint32_t write(::apache::thrift::protocol::TProtocol *oprot) const;

    virtual void printTo(std::ostream &out) const;
};

void swap(duplicate_response &a, duplicate_response &b);

inline std::ostream &operator<<(std::ostream &out, const duplicate_response &obj)
{
    obj.printTo(out);
    return out;
}
}
} // namespace

#endif
