/*
 * FUN_1000287f at 1000287f
 * undefined1 __stdcall FUN_1000287f(int param_1)
 * Address ranges: 1000287f-100028b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1000287f(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((int *)(&DAT_100df2f0)[param_1 * 0x8a] == (int *)0x0) {
    iVar3 = (**(code **)(*DAT_100dea70 + 0x28))((&DAT_100df2f8)[param_1 * 0x8a]);
    uVar1 = 2 < iVar3;
  }
  else {
    puVar2 = (undefined1 *)
             (**(code **)(*(int *)(&DAT_100df2f0)[param_1 * 0x8a] + 0xc))((int)&param_1 + 2);
    uVar1 = *puVar2;
  }
  return uVar1;
}

