#include <string>

#ifdef RCT_NEW_ARCH_ENABLED
#include <react/renderer/uimanager/UIManagerBinding.h>
#include <react/renderer/uimanager/primitives.h>
#if REACT_NATIVE_MINOR_VERSION >= 73
#include <react/utils/CoreFeatures.h>
#endif // REACT_NATIVE_MINOR_VERSION >= 73
#endif // RCT_NEW_ARCH_ENABLED
#include "NativeWorkletsModule.h"
#ifdef __ANDROID__
#include <fbjni/fbjni.h>
#endif

#include <jsi/jsi.h>

using namespace facebook;

namespace reanimated {

NativeWorkletsModule::NativeWorkletsModule(
    const std::shared_ptr<facebook::react::CallInvoker> &jsCallInvoker,
    const std::string &valueUnpackerCode)
    : NativeWorkletsModuleSpec(jsCallInvoker),
      valueUnpackerCode_(valueUnpackerCode) {}

NativeWorkletsModule::~NativeWorkletsModule() {}

std::string NativeWorkletsModule::getValueUnpackerCode() const {
  return valueUnpackerCode_;
}
} // namespace reanimated
