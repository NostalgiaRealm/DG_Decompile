/*
 * FUN_1800c53d0 at 1800c53d0
 * undefined FUN_1800c53d0(void)
 * Address ranges: 1800c53d0-1800c552b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c53d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  lVar5 = *(longlong *)(param_1 + -0x78);
  uVar6 = 0x8876086c;
  if (*(longlong *)(lVar5 + 0xc0) != 0 && *(longlong *)(lVar5 + 0xc0) == param_2) {
    (*__imp_GDI32_dll_GdiFlush)();
    *(undefined1 *)(lVar5 + 0xed) = 1;
    if (*(longlong *)(lVar5 + 0xd0) != *(longlong *)(lVar5 + 0x28)) {
      lVar4 = *(longlong *)(param_1 + -0x78);
      if (((*(char *)(lVar4 + 0xed) != '\0') && (lVar2 = *(longlong *)(lVar4 + 0xd0), lVar2 != 0))
         && (*(char *)(lVar4 + 0xec) == '\0')) {
        lVar3 = *(longlong *)(lVar4 + 0xe0);
        if (*(int *)(lVar4 + 0xe8) == *(int *)(lVar4 + 0xd8)) {
          thunk_FUN_180001218(lVar2,lVar3,
                              (*(uint *)(lVar4 + 0xa8) >> 3) * *(int *)(lVar4 + 0x90) *
                              *(int *)(lVar4 + 0x8c));
        }
        else {
          uVar7 = 0;
          if (*(int *)(lVar4 + 0x90) != 0) {
            do {
              thunk_FUN_180001218(lVar2,lVar3,
                                  (uint)(*(int *)(lVar4 + 0xa8) * *(int *)(lVar4 + 0x8c)) >> 3);
              uVar7 = uVar7 + 1;
              lVar3 = lVar3 + (ulonglong)*(uint *)(lVar4 + 0xe8);
              lVar2 = lVar2 + (ulonglong)*(uint *)(lVar4 + 0xd8);
            } while (uVar7 < *(uint *)(lVar4 + 0x90));
          }
        }
      }
      *(undefined1 *)(lVar4 + 0xed) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + -0x78) + 0xee) = 0;
      lVar4 = *(longlong *)(param_1 + -0x78);
      *(undefined8 *)(lVar4 + 0xd0) = 0;
      *(undefined4 *)(lVar4 + 0xd8) = 0;
    }
    iVar1 = FUN_18000cc80(param_1 + -0x80);
    if (-1 < iVar1) {
      (*__imp_GDI32_dll_SelectObject)(*(undefined8 *)(lVar5 + 0xc0),*(undefined8 *)(lVar5 + 200));
      (*__imp_GDI32_dll_DeleteDC)(*(undefined8 *)(lVar5 + 0xc0));
      *(undefined8 *)(lVar5 + 0xc0) = 0;
      uVar6 = 0;
    }
  }
  return uVar6;
}

