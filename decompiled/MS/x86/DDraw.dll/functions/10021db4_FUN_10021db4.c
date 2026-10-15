/*
 * FUN_10021db4 at 10021db4
 * undefined4 * __thiscall FUN_10021db4(void * this, undefined4 * param_1)
 * Address ranges: 10021db4-10021ea4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10021db4(void *this,undefined4 *param_1)

{
  undefined4 uStack_c;
  
  *param_1 = 0x3c;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0x3e;
  param_1[1] = 0x3e;
  switch(this) {
  case (void *)0x0:
  case (void *)0x7:
  case (void *)0x8:
    goto switchD_10021de2_caseD_0;
  case (void *)0x1:
  case (void *)0x2:
  case (void *)0x3:
  case (void *)0x4:
  case (void *)0x9:
  case (void *)0xa:
  case (void *)0xb:
    *param_1 = 0x35;
    uStack_c = 0x39;
    goto LAB_10021df1;
  case (void *)0x5:
  case (void *)0x6:
  case (void *)0xc:
  case (void *)0xd:
    *param_1 = 0x27;
    uStack_c = 0x2a;
    goto LAB_10021df1;
  case (void *)0xe:
    *param_1 = 0x46;
    param_1[1] = 0x47;
    break;
  case (void *)0xf:
  case (void *)0x10:
    *param_1 = 0x49;
    param_1[1] = 0x4a;
    break;
  case (void *)0x11:
  case (void *)0x12:
    *param_1 = 0x4c;
    param_1[1] = 0x4d;
    break;
  case (void *)0x13:
    uStack_c = 0x44;
    goto LAB_10021e39;
  case (void *)0x14:
    uStack_c = 0x45;
LAB_10021e39:
    *param_1 = uStack_c;
    param_1[1] = uStack_c;
    break;
  case (void *)0x15:
    *param_1 = 0x17;
    uStack_c = 0x18;
LAB_10021df1:
    param_1[3] = uStack_c;
    param_1[1] = uStack_c;
    return param_1;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    break;
  case (void *)0x17:
    *param_1 = 0x35;
    param_1[4] = 0x37;
    param_1[1] = 0x38;
    break;
  case (void *)0x19:
  case (void *)0x1a:
    param_1[2] = 0x2f;
  case (void *)0x18:
    *param_1 = 0x2c;
    param_1[4] = 0x2d;
    param_1[1] = 0x2e;
    break;
  case (void *)0x1b:
    *param_1 = 0x27;
    param_1[4] = 0x28;
    param_1[1] = 0x29;
  }
  param_1[3] = 0;
switchD_10021de2_caseD_0:
  return param_1;
}

