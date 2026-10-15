/*
 * FUN_1800af050 at 1800af050
 * undefined FUN_1800af050(void)
 * Address ranges: 1800af050-1800af193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800af050(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar2 == 0) {
        FUN_180003398();
      }
    }
    uVar9 = *param_2;
    uVar7 = param_2[3];
    uVar5 = param_2[2];
    uVar11 = param_2[5];
    uVar10 = param_2[4];
    uVar8 = param_2[7];
    uVar6 = param_2[6];
    uVar4 = *(undefined4 *)(param_2 + 8);
    if (*(char *)(param_1 + -0x642c) == '\0') {
      *(undefined8 *)(param_1 + -0x655c) = param_2[1];
      *(undefined8 *)(param_1 + -0x6564) = uVar9;
      *(undefined8 *)(param_1 + -0x654c) = uVar7;
      *(undefined8 *)(param_1 + -0x6554) = uVar5;
      *(undefined8 *)(param_1 + -0x653c) = uVar11;
      *(undefined8 *)(param_1 + -0x6544) = uVar10;
      *(undefined8 *)(param_1 + -0x652c) = uVar8;
      *(undefined8 *)(param_1 + -0x6534) = uVar6;
      *(undefined4 *)(param_1 + -0x6524) = uVar4;
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xb8))();
    }
    else {
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      *(undefined8 *)(lVar3 + 0x4a00) = param_2[1];
      *(undefined8 *)(lVar3 + 0x49f8) = uVar9;
      *(undefined8 *)(lVar3 + 0x4a10) = uVar7;
      *(undefined8 *)(lVar3 + 0x4a08) = uVar5;
      *(undefined8 *)(lVar3 + 0x4a20) = uVar11;
      *(undefined8 *)(lVar3 + 0x4a18) = uVar10;
      *(undefined8 *)(lVar3 + 0x4a30) = uVar8;
      *(undefined8 *)(lVar3 + 0x4a28) = uVar6;
      *(undefined4 *)(lVar3 + 19000) = uVar4;
      *(undefined1 *)(lVar3 + 0xace9) = 1;
    }
    uVar4 = 0;
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar4;
}

