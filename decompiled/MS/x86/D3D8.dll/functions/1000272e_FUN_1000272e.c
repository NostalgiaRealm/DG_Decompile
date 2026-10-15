/*
 * FUN_1000272e at 1000272e
 * undefined1 __stdcall FUN_1000272e(int param_1)
 * Address ranges: 1000272e-10002768
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1000272e(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((int *)(&DAT_100ba728)[param_1 * 0x8a] == (int *)0x0) {
    iVar3 = (**(code **)(*DAT_100ba2b0 + 0x28))((&DAT_100ba730)[param_1 * 0x8a]);
    uVar1 = 2 < iVar3;
  }
  else {
    puVar2 = (undefined1 *)
             (**(code **)(*(int *)(&DAT_100ba728)[param_1 * 0x8a] + 0xc))((int)&param_1 + 3);
    uVar1 = *puVar2;
  }
  return uVar1;
}

