/*
 * FUN_140013ed0 at 140013ed0
 * undefined8 __cdecl FUN_140013ed0(longlong * param_1, undefined4 * param_2)
 * Address ranges: 140013ed0-140013f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140013ed0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  SIZE_T SVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    SVar5 = CONCAT44(0,uVar2) << 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      SVar5 = 0xffffffffffffffff;
    }
    puVar4 = (undefined8 *)thunk_FUN_1400247f0(SVar5);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    thunk_FUN_140001000(puVar4,(undefined8 *)*param_1,
                        (ulonglong)*(uint *)((longlong)param_1 + 0xc) << 2);
    thunk_FUN_140024830((LPVOID)*param_1);
    *param_1 = (longlong)puVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 4) = *param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

