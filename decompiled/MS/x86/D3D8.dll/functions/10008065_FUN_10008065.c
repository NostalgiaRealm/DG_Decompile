/*
 * FUN_10008065 at 10008065
 * undefined4 __thiscall FUN_10008065(void * this, uint param_1, RECT * param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10008065-10008157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10008065(void *this,uint param_1,RECT *param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  ushort in_FPUControlWord;
  RECT local_20;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  uVar1 = 0x8876086c;
  if ((((param_2 == (RECT *)0x0) || (param_1 != 0)) &&
      (((param_3 & 2) == 0 || (*(int *)((int)this + 0x28) != 0)))) &&
     (((param_3 & 4) == 0 || (*(char *)((int)this + 0xfc) != '\0')))) {
    if ((*(char *)((int)this + 0x58bd) == '\0') && (*(int *)((int)this + 0x18) != 0)) {
      local_c = &local_10;
      local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
      local_10 = in_FPUControlWord | 0x80000000;
      if ((in_FPUControlWord & 0xf3f) != 0x23f) {
        local_10 = (uint)in_FPUControlWord;
        local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
      }
      local_20.left = *(int *)((int)this + 0x2c);
      local_20.top = *(int *)((int)this + 0x30);
      local_20.right = *(int *)((int)this + 0x34) + local_20.left;
      local_20.bottom = *(int *)((int)this + 0x38) + local_20.top;
      FUN_100162ef(this,param_1,param_2,param_3,param_4,param_5,param_6,&local_20);
    }
    uVar1 = 0;
  }
  return uVar1;
}

