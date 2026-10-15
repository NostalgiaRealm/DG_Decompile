/*
 * FUN_10005580 at 10005580
 * undefined4 __thiscall FUN_10005580(void * this, byte * param_1, int param_2)
 * Address ranges: 10005580-10005602
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10005580(void *this,byte *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100501a2(param_1,&DAT_10051220,0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x18);
  }
  else {
    iVar1 = FUN_100501a2(param_1,&DAT_10051230,0x10);
    if (iVar1 == 0) {
      iVar1 = *(int *)((int)this + 0x24);
    }
    else {
      iVar1 = FUN_100501a2(param_1,&DAT_10051240,0x10);
      if (iVar1 == 0) {
        iVar1 = *(int *)((int)this + 0x30);
      }
      else {
        iVar1 = FUN_100501a2(param_1,&DAT_10051250,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = *(int *)((int)this + 0x3c);
      }
    }
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}

