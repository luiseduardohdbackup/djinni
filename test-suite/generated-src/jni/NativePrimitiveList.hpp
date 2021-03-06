// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primitive_list.djinni

#pragma once

#include "djinni_support.hpp"
#include "primitive_list.hpp"

namespace djinni_generated {

class NativePrimitiveList final {
public:
    using CppType = PrimitiveList;
    using JniType = jobject;

    static jobject toJava(JNIEnv*, PrimitiveList);
    static PrimitiveList fromJava(JNIEnv*, jobject);

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/dropbox/djinni/test/PrimitiveList") };
    const jmethodID jconstructor { djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/ArrayList;)V") };
    const jfieldID field_mList { djinni::jniGetFieldID(clazz.get(), "mList", "Ljava/util/ArrayList;") };

private:
    NativePrimitiveList() {}
    friend class djinni::JniClass<::djinni_generated::NativePrimitiveList>;
};

}  // namespace djinni_generated
