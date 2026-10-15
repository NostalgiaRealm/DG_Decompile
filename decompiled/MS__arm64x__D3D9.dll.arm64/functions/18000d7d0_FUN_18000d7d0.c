/*
 * FUN_18000d7d0 at 18000d7d0
 * undefined FUN_18000d7d0(void)
 * Address ranges: 18000d7d0-18000d98b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000d7d0(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char local_70 [8];
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  lVar6 = *param_3;
  lVar3 = (ulonglong)*(uint *)(param_1 + 0xa0) * 600;
  if (lVar6 == *(longlong *)(&DAT_180253a48 + lVar3) && *(longlong *)(&DAT_180253a48 + lVar3) != 0)
  {
    FUN_18001f7f0(local_70);
    iVar1 = *(int *)(&DAT_180253a50 + lVar3);
    *(int *)(&DAT_180253a50 + lVar3) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      lVar4 = *(longlong *)(&DAT_180253a40 + lVar3);
      (*__imp_GDI32_dll_SelectObject)(lVar6,*(undefined8 *)(lVar4 + 0x68));
      pcVar2 = __imp_GDI32_dll_DeleteDC;
      *(undefined8 *)(lVar4 + 0x68) = 0;
      (*pcVar2)(lVar6);
      *(undefined1 *)(lVar4 + 0x8d) = 1;
      *(undefined8 *)(&DAT_180253a48 + lVar3) = 0;
    }
    *param_4 = 1;
    lVar6 = DAT_18024e310;
    if (local_70[0] == '\0') {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
    else {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      lVar6 = DAT_18024e310;
    }
    FUN_180001590(lVar6 + 0x30);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if (*param_4 == 1) {
    lVar3 = *(longlong *)(&DAT_180253a40 + lVar3);
    (*__imp_GDI32_dll_GdiFlush)();
    local_68 = 0;
    iStack_5c = *(int *)(lVar3 + 0x30) + -1;
    local_60 = *(int *)(lVar3 + 0x2c) + -1;
    (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x78))
              (*(longlong **)(lVar3 + 0x10),0,0,*(undefined8 *)(lVar3 + 0x80),
               *(undefined4 *)(lVar3 + 0x88),&local_68);
    local_58 = *(undefined8 *)(lVar3 + 0x98);
    *(undefined1 *)(lVar3 + 0x8d) = 0;
    uStack_50 = 0;
    local_48 = func_0x00018021fb80(*(longlong *)(lVar3 + 8) + 8);
    iStack_5c = *(undefined4 *)(lVar3 + 0x30);
    local_44 = 0x200000002;
    local_60 = *(undefined4 *)(lVar3 + 0xa4);
    local_3c = 0;
    local_68 = CONCAT44(*(undefined4 *)(lVar3 + 0x2c),*(undefined4 *)(lVar3 + 0xa0));
    FUN_180023080(*(undefined8 *)(lVar3 + 0x90),&local_58);
  }
  return uVar5;
}

