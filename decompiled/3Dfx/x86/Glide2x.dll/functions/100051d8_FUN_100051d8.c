/*
 * FUN_100051d8 at 100051d8
 * uint __thiscall FUN_100051d8(void * this, byte * param_1, undefined4 param_2)
 * Address ranges: 100051d8-1000528f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100051d8(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100501a2(param_1,&DAT_10051220,0x10);
  if (iVar1 == 0) {
    param_1 = param_2;
    uVar2 = FUN_1000567e((void *)((int)this + 0x18),&param_1);
  }
  else {
    iVar1 = FUN_100501a2(param_1,&DAT_10051230,0x10);
    if (iVar1 == 0) {
      param_1 = param_2;
      uVar2 = FUN_1000567e((void *)((int)this + 0x24),&param_1);
    }
    else {
      iVar1 = FUN_100501a2(param_1,&DAT_10051240,0x10);
      if (iVar1 == 0) {
        param_1 = param_2;
        uVar2 = FUN_1000567e((void *)((int)this + 0x30),&param_1);
      }
      else {
        uVar2 = FUN_100501a2(param_1,&DAT_10051250,0x10);
        if (uVar2 == 0) {
          param_1 = param_2;
          uVar2 = FUN_1000567e((void *)((int)this + 0x3c),&param_1);
        }
        else {
          uVar2 = uVar2 & 0xffffff00;
        }
      }
    }
  }
  return uVar2;
}

