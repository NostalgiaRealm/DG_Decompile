/*
 * FUN_1800b45c8 at 1800b45c8
 * ulonglong __fastcall FUN_1800b45c8(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800b45c8-1800b47c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b45c8(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint local_res8 [2];
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    uVar7 = 0x8876086c;
  }
  else {
    FUN_1800fa780(local_res8);
    uVar1 = *(uint *)(param_1 + -0x6430);
    uVar8 = (ulonglong)uVar1;
    uVar10 = uVar1 + 1;
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + -0x6440) + uVar8 * 8) + 8) = 0;
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xf0))
              (*(longlong **)(param_1 + -0x6810),lVar4,*(undefined8 *)(lVar4 + 8));
    puVar6 = local_res8;
    *(undefined1 *)(param_1 + -0x642c) = 0;
    FUN_1800fa7bc();
    lVar4 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + uVar8 * 8);
    FUN_180006f1c(puVar6,param_1 + -0x658,lVar4 + 0xa190,*(uint *)(param_1 + -0x59bc));
    FUN_180006f1c(puVar6,param_1 + -600,lVar4 + 0xa994,0xe0);
    uVar9 = 0x10;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + uVar8 * 8);
    FUN_180006f1c(puVar6,param_1 + 600,lVar4 + 0x527c,0x10);
    FUN_180006f1c(puVar6,param_1 + 0x268,lVar4 + 0x52a0,uVar9);
    FUN_180006f1c(puVar6,param_1 + 0x278,lVar4 + 0x52c4,uVar9);
    FUN_180006f1c(puVar6,param_1 + 0x288,lVar4 + 0x52e8,uVar9);
    lVar4 = FUN_1800acd98(param_1 + -0x6838,uVar10,lVar4);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar5 = FUN_1800c0ca8(lVar4,(longlong *)&DAT_1800fd720,param_2);
      uVar7 = uVar5 & 0xffffffff;
      if (((((int)uVar5 < 0) && (uVar10 != 0)) && (uVar10 <= *(uint *)(param_1 + -0x6438))) &&
         (*(longlong *)(*(longlong *)(param_1 + -0x6440) + uVar8 * 8) != 0)) {
        FUN_1800074ac(param_1 + -0x6838,uVar1);
      }
    }
  }
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar7;
}

