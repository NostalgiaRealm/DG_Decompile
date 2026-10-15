/*
 * FUN_1800b40a8 at 1800b40a8
 * undefined4 __fastcall FUN_1800b40a8(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800b40a8-1800b41cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b40a8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  BOOL BVar10;
  undefined4 uVar11;
  uint local_res8 [8];
  
  uVar11 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      bVar9 = false;
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    }
    else {
      bVar9 = true;
      BVar10 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar10 == 0) {
        FUN_1800044dc(0);
      }
    }
    FUN_1800fa780(local_res8);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    uVar11 = *(undefined4 *)(param_2 + 8);
    if (*(char *)(param_1 + -0x642c) == '\0') {
      *(undefined8 *)(param_1 + -0x6564) = *param_2;
      *(undefined8 *)(param_1 + -0x655c) = uVar2;
      *(undefined8 *)(param_1 + -0x6554) = uVar3;
      *(undefined8 *)(param_1 + -0x654c) = uVar4;
      *(undefined8 *)(param_1 + -0x6544) = uVar5;
      *(undefined8 *)(param_1 + -0x653c) = uVar6;
      *(undefined8 *)(param_1 + -0x6534) = uVar7;
      *(undefined8 *)(param_1 + -0x652c) = uVar8;
      *(undefined4 *)(param_1 + -0x6524) = uVar11;
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xb8))();
    }
    else {
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      *(undefined8 *)(lVar1 + 0x49f8) = *param_2;
      *(undefined8 *)(lVar1 + 0x4a00) = uVar2;
      *(undefined1 *)(lVar1 + 0xace9) = 1;
      *(undefined8 *)(lVar1 + 0x4a08) = uVar3;
      *(undefined8 *)(lVar1 + 0x4a10) = uVar4;
      *(undefined8 *)(lVar1 + 0x4a18) = uVar5;
      *(undefined8 *)(lVar1 + 0x4a20) = uVar6;
      *(undefined8 *)(lVar1 + 0x4a28) = uVar7;
      *(undefined8 *)(lVar1 + 0x4a30) = uVar8;
      *(undefined4 *)(lVar1 + 19000) = uVar11;
    }
    uVar11 = 0;
    FUN_1800fa7bc();
    if (bVar9) {
      LeaveCriticalSection(DAT_1801123a8);
      uVar11 = 0;
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar11;
}

