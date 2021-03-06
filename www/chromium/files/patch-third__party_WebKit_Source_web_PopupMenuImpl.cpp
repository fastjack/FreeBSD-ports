--- third_party/WebKit/Source/web/PopupMenuImpl.cpp.orig	2017-03-09 20:04:46 UTC
+++ third_party/WebKit/Source/web/PopupMenuImpl.cpp
@@ -155,7 +155,7 @@ class PopupMenuImpl::ItemIterationContex
         m_isInGroup(false),
         m_buffer(buffer) {
     DCHECK(m_buffer);
-#if OS(LINUX)
+#if OS(LINUX) || OS(BSD)
     // On other platforms, the <option> background color is the same as the
     // <select> background color. On Linux, that makes the <option>
     // background color very dark, so by default, try to use a lighter
