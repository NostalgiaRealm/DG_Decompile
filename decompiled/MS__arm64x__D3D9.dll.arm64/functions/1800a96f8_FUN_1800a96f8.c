/*
 * FUN_1800a96f8 at 1800a96f8
 * undefined FUN_1800a96f8(void)
 * Address ranges: 1800a96f8-1800a98b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800a96f8(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x80) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x80) + -0x59c0);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar3 == 0) {
      FUN_180003398();
    }
  }
  local_48 = *(undefined4 *)(param_1 + -0x30);
  uStack_44 = *(undefined4 *)(param_1 + -0x2c);
  local_50 = 0;
  if (param_3 == 0) {
    lVar7 = param_1 + (ulonglong)param_2 * 0x10;
    (*__imp_USER32_dll_UnionRect)(lVar7 + 0x318,lVar7 + 0x318,&local_50);
    iVar3 = 0;
  }
  else {
    iVar3 = -0x7789f794;
    iVar4 = (*__imp_USER32_dll_IntersectRect)(auStack_40,param_3);
    if ((iVar4 != 0) && (iVar4 = (*__imp_USER32_dll_EqualRect)(param_3,auStack_40), iVar4 != 0)) {
      lVar7 = param_1 + (ulonglong)param_2 * 0x10;
      (*__imp_USER32_dll_UnionRect)(lVar7 + 0x318,lVar7 + 0x318,param_3);
      iVar3 = 0;
    }
    if (iVar3 < 0) goto LAB_1800a987c;
  }
  if (*(int *)(param_1 + -0x1c) == 1) {
    uVar5 = 1;
    if (1 < *(ushort *)(param_1 + -0x5c)) {
      do {
        lVar7 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + -0x58) + (ulonglong)(uVar5 + param_2 * 0x10) * 8) + 8);
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          *(uint *)(lVar7 + 0x48) = *(uint *)(lVar7 + 0x48) | 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + -0x5c));
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + -0x58) + (ulonglong)(param_2 << 4) * 8);
    lVar6 = *(longlong *)(lVar7 + 8);
    if (*(longlong *)(lVar6 + 0x28) != 0) {
      *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 1;
      FUN_180005df8(*(undefined8 *)(lVar7 + 0x28));
    }
  }
LAB_1800a987c:
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar3;
}

