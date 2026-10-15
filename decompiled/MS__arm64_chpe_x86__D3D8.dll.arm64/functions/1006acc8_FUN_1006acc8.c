/*
 * FUN_1006acc8 at 1006acc8
 * undefined FUN_1006acc8(void)
 * Address ranges: 1006acc8-1006ad37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006acc8(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = (ushort)param_3 & 0xff;
  if ((*(ushort *)(param_2 + (param_3 + (param_4 & 0xff) * 8) * 0x10 + 0xe4) & 0xf0) == 0x20) {
    if ((param_4 & 1) == 0) {
      uVar2 = uVar2 | 0xa0;
      puVar1 = (ushort *)(param_2 + 0x2d2);
    }
    else {
      uVar2 = uVar2 | 0x1a0;
      puVar1 = (ushort *)(param_2 + 0x2da);
    }
  }
  else if ((param_4 & 1) == 0) {
    uVar2 = uVar2 | 0xa0;
    puVar1 = (ushort *)(param_2 + 0x2d0);
  }
  else {
    uVar2 = uVar2 | 0x1a0;
    puVar1 = (ushort *)(param_2 + 0x2d8);
  }
  *puVar1 = uVar2;
  return;
}

