//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <desktop_drop/desktop_drop_plugin.h>
#include <ffmpeg_hl/ffmpeg_hl_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) desktop_drop_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "DesktopDropPlugin");
  desktop_drop_plugin_register_with_registrar(desktop_drop_registrar);
  g_autoptr(FlPluginRegistrar) ffmpeg_hl_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FfmpegHlPlugin");
  ffmpeg_hl_plugin_register_with_registrar(ffmpeg_hl_registrar);
}
