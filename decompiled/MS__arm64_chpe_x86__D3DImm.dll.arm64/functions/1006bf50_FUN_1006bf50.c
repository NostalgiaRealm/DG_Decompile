/*
 * FUN_1006bf50 at 1006bf50
 * undefined FUN_1006bf50(void)
 * Address ranges: 1006bf50-1006bf8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006bf50(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x10)) {
    uVar1 = 0;
    uVar2 = *(undefined8 *)(*(int *)(param_1 + 4) + 0x6c);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(*(int *)(param_1 + 4) + 0x74);
    *(undefined8 *)param_2 = uVar2;
  }
  return uVar1;
}

