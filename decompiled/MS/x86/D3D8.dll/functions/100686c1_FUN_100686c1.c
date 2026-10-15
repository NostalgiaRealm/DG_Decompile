/*
 * FUN_100686c1 at 100686c1
 * undefined4 * __thiscall FUN_100686c1(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6)
 * Address ranges: 100686c1-10068745
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100686c1(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  undefined4 *this_00;
  undefined4 uVar1;
  int extraout_ECX;
  
  this_00 = (undefined4 *)FUN_100ad475(0x3c);
  if (this_00 != (undefined4 *)0x0) {
    FUN_1007931a(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
    this_00[8] = 0;
    this_00[9] = 0;
    this_00[10] = 0;
    this_00[0xb] = 0;
    *this_00 = &PTR_LAB_100b3014;
    this_00[7] = &PTR_LAB_100b3004;
    this_00[0xc] = this;
    this_00[0xd] = 0;
    this_00[0xe] = 0xffffffff;
    uVar1 = FUN_1007275d(extraout_ECX);
    if ((char)uVar1 != '\0') {
      if (this_00 != (undefined4 *)0x0) {
        return this_00 + 7;
      }
      return (undefined4 *)0x0;
    }
    FUN_10072565(this_00);
    FUN_100ad48c(this_00);
  }
  return (undefined4 *)0x0;
}

