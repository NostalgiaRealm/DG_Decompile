/*
 * FUN_1009182a at 1009182a
 * undefined4 __stdcall FUN_1009182a(int param_1, uint param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 1009182a-100918b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009182a(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  uVar1 = param_2;
  uVar4 = 0x8876086c;
  puVar3 = (uint *)(*(int *)(param_1 + -100) + -0x58e4);
  if (*(int *)(param_1 + -100) == 0) {
    puVar3 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*puVar3 >> 2) & 1);
  if (uVar1 < 6) {
    if ((*(uint *)(param_1 + -0x24) & 0x400) == 0) {
      uVar2 = (uint)*(ushort *)(param_1 + -0x48);
    }
    else {
      uVar2 = 1;
    }
    if ((param_3 < uVar2) && (param_4 != (undefined4 *)0x0)) {
      uVar4 = FUN_1009d053(*(int *)(param_1 + 0x10 + (uVar1 * 0x10 + param_3) * 4) + 0x5c,0x100d1370
                           ,param_4);
    }
  }
  FUN_10003e89((char *)((int)&param_2 + 3));
  return uVar4;
}

