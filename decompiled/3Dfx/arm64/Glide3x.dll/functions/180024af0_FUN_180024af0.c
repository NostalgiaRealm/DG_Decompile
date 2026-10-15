/*
 * FUN_180024af0 at 180024af0
 * undefined __cdecl FUN_180024af0(longlong param_1, undefined8 * param_2)
 * Address ranges: 180024af0-180024b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024af0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  FUN_18001bf90(param_1 + 0x3668);
  lVar7 = *(longlong *)(param_1 + 0x3340);
  uVar3 = *(uint *)(param_1 + 0xe8);
  FUN_180038440((uint *)(lVar7 + 0x12c0));
  if (*(char *)(lVar7 + 0x14c4) != '\0') {
    uVar1 = uVar3 + 7;
    uVar2 = (uVar1 & 0xfffffff8) + 0x10;
    puVar4 = (undefined8 *)FUN_180038310(lVar7 + 0x12c0,uVar2);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar7 + 0x14c0));
      puVar4[1] = (ulonglong)uVar2;
      puVar6 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
      puVar4[2] = puVar6;
      puVar4[3] = param_1;
      thunk_FUN_1800010d8(puVar6,param_2,(ulonglong)uVar3);
      uVar5 = (ulonglong)uVar1 & 0xfffffff8;
      *(undefined8 *)(uVar5 + (longlong)puVar6) = 0;
      *puVar4 = FUN_180024c20;
      *(ulonglong *)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28 + 0x1350) =
           uVar5 + (longlong)puVar6;
      if (*(char *)(lVar7 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar7 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar7 + 0x1340));
        return;
      }
      goto LAB_180024bfc;
    }
    *(undefined4 *)(lVar7 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar7 + 0x12c0));
  }
  puVar4 = *(undefined8 **)(lVar7 + 0x14a0);
  *puVar4 = param_2;
  puVar4[1] = param_1;
  FUN_180024c20(puVar4);
LAB_180024bfc:
  *(undefined4 *)(lVar7 + 0x12c0) = 0;
  return;
}

