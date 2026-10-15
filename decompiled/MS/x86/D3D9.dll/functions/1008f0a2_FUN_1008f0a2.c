/*
 * FUN_1008f0a2 at 1008f0a2
 * undefined4 * __thiscall FUN_1008f0a2(void * this, undefined4 * param_1)
 * Address ranges: 1008f0a2-1008f202
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1008f0a2(void *this,undefined4 *param_1)

{
  undefined4 uStack_10;
  
  *param_1 = 0x3c;
  param_1[3] = 0x3e;
  param_1[1] = 0x3e;
  param_1[2] = 0;
  param_1[4] = 0;
  switch(this) {
  case (void *)0x0:
  case (void *)0x7:
  case (void *)0x8:
    goto switchD_1008f0d3_caseD_0;
  case (void *)0x1:
  case (void *)0x2:
  case (void *)0x3:
  case (void *)0x4:
  case (void *)0x9:
  case (void *)0xa:
  case (void *)0xb:
    *param_1 = 0x35;
    uStack_10 = 0x39;
    goto LAB_1008f0e3;
  case (void *)0x5:
  case (void *)0x6:
  case (void *)0xc:
  case (void *)0xd:
    *param_1 = 0x27;
    uStack_10 = 0x2a;
    goto LAB_1008f0e3;
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
    uStack_10 = 0x44;
    goto LAB_1008f130;
  case (void *)0x14:
    uStack_10 = 0x45;
LAB_1008f130:
    *param_1 = uStack_10;
    param_1[1] = uStack_10;
    break;
  case (void *)0x15:
    *param_1 = 0x17;
    uStack_10 = 0x18;
    goto LAB_1008f0e3;
  case (void *)0x16:
    *param_1 = 9;
    uStack_10 = 0xb;
    goto LAB_1008f0e3;
  case (void *)0x17:
    uStack_10 = 0x38;
    goto LAB_1008f14b;
  case (void *)0x18:
    *param_1 = 0x21;
    uStack_10 = 0x23;
    goto LAB_1008f0e3;
  case (void *)0x19:
    *param_1 = 0x21;
    uStack_10 = 0x25;
    goto LAB_1008f0e3;
  case (void *)0x1a:
    uStack_10 = 0x36;
    goto LAB_1008f14b;
  case (void *)0x1b:
    uStack_10 = 0x22;
    goto LAB_1008f14b;
  case (void *)0x1c:
    uStack_10 = 10;
    goto LAB_1008f14b;
  case (void *)0x1d:
    *param_1 = 0x29;
    param_1[3] = 0x29;
    param_1[1] = 0x29;
    return param_1;
  case (void *)0x1e:
    uStack_10 = 0x10;
    goto LAB_1008f14b;
  case (void *)0x1f:
    uStack_10 = 2;
LAB_1008f14b:
    *param_1 = uStack_10;
LAB_1008f0e3:
    param_1[3] = uStack_10;
    param_1[1] = uStack_10;
    return param_1;
  case (void *)0x20:
    *param_1 = 0x4f;
    param_1[1] = 0x50;
    break;
  case (void *)0x21:
    *param_1 = 0x52;
    param_1[1] = 0x53;
    break;
  case (void *)0x22:
  case (void *)0x27:
    *param_1 = 0x35;
    param_1[4] = 0x37;
    param_1[1] = 0x38;
    break;
  case (void *)0x24:
  case (void *)0x25:
  case (void *)0x28:
  case (void *)0x29:
    param_1[2] = 0x2f;
  case (void *)0x23:
    *param_1 = 0x2c;
    param_1[4] = 0x2d;
    param_1[1] = 0x2e;
    break;
  case (void *)0x26:
    *param_1 = 0x27;
    param_1[4] = 0x28;
    param_1[1] = 0x29;
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
  }
  param_1[3] = 0;
switchD_1008f0d3_caseD_0:
  return param_1;
}

