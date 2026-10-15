/*
 * FUN_10081a88 at 10081a88
 * undefined FUN_10081a88(void)
 * Address ranges: 10081a88-10081af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081a88(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = (ushort)param_3 & 0xff;
  if ((*(ushort *)(param_2 + (param_3 + (param_4 & 0xff) * 8) * 0x10 + 0xf4) & 0xf0) == 0x20) {
    if ((param_4 & 1) == 0) {
      uVar2 = uVar2 | 0xa0;
      puVar1 = (ushort *)(param_2 + 0x532);
    }
    else {
      uVar2 = uVar2 | 0x1a0;
      puVar1 = (ushort *)(param_2 + 0x53a);
    }
  }
  else if ((param_4 & 1) == 0) {
    uVar2 = uVar2 | 0xa0;
    puVar1 = (ushort *)(param_2 + 0x530);
  }
  else {
    uVar2 = uVar2 | 0x1a0;
    puVar1 = (ushort *)(param_2 + 0x538);
  }
  *puVar1 = uVar2;
  return;
}

