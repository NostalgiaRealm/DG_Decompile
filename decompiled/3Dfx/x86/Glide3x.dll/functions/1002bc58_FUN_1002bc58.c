/*
 * FUN_1002bc58 at 1002bc58
 * uint __thiscall FUN_1002bc58(void * this, byte * param_1, undefined4 param_2)
 * Address ranges: 1002bc58-1002bd0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002bc58(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_10052db2(param_1,&DAT_10054220,0x10);
  if (iVar1 == 0) {
    param_1 = param_2;
    uVar2 = FUN_1002c0fe((void *)((int)this + 0x18),&param_1);
  }
  else {
    iVar1 = FUN_10052db2(param_1,&DAT_10054230,0x10);
    if (iVar1 == 0) {
      param_1 = param_2;
      uVar2 = FUN_1002c0fe((void *)((int)this + 0x24),&param_1);
    }
    else {
      iVar1 = FUN_10052db2(param_1,&DAT_10054240,0x10);
      if (iVar1 == 0) {
        param_1 = param_2;
        uVar2 = FUN_1002c0fe((void *)((int)this + 0x30),&param_1);
      }
      else {
        uVar2 = FUN_10052db2(param_1,&DAT_10054250,0x10);
        if (uVar2 == 0) {
          param_1 = param_2;
          uVar2 = FUN_1002c0fe((void *)((int)this + 0x3c),&param_1);
        }
        else {
          uVar2 = uVar2 & 0xffffff00;
        }
      }
    }
  }
  return uVar2;
}

