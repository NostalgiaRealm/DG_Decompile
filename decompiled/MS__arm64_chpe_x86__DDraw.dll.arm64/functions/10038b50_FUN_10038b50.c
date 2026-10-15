/*
 * FUN_10038b50 at 10038b50
 * undefined FUN_10038b50(void)
 * Address ranges: 10038b50-10038da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10038b50(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *extraout_w11;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined4 *)param_2 = 0x20;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,&local_30,param_3);
  switch(param_3) {
  case 0:
    uVar1 = 0x60;
    goto LAB_10038bcc;
  case 1:
  case 2:
    uVar1 = 0x40;
    break;
  case 3:
  case 4:
    uVar1 = 0x41;
    break;
  case 5:
    uVar1 = 0x40;
    goto LAB_10038be8;
  case 6:
    uVar1 = 0x41;
LAB_10038be8:
    *(undefined4 *)((int)param_2 + 4) = uVar1;
    *(undefined4 *)((int)param_2 + 0xc) = 0x20;
    goto LAB_10038c48;
  case 7:
    uVar1 = 0x20000;
LAB_10038bcc:
    *(undefined4 *)((int)param_2 + 4) = uVar1;
    uVar1 = 8;
    goto LAB_10038c40;
  case 8:
    *(undefined4 *)((int)param_2 + 4) = 2;
    puVar3 = (undefined8 *)((int)param_2 + 0xc);
    local_28 = 8;
    goto LAB_10038c28;
  case 9:
    uVar1 = 0x20001;
    break;
  case 10:
    uVar1 = 0x80000;
    goto LAB_10038c74;
  case 0xb:
    uVar1 = 0xc0000;
LAB_10038c74:
    *(undefined4 *)((int)param_2 + 4) = uVar1;
    *(undefined4 *)((int)param_2 + 0xc) = 0x10;
LAB_10038ca8:
    *(undefined4 *)(param_2 + 2) = local_30;
    *(undefined4 *)((int)param_2 + 0x14) = uStack_2c;
    puVar3 = param_2 + 3;
LAB_10038c28:
    *(undefined4 *)puVar3 = local_28;
    return param_2;
  case 0xc:
    *(undefined4 *)((int)param_2 + 4) = 0xc0000;
    *(undefined4 *)((int)param_2 + 0xc) = 0x20;
    goto LAB_10038ca8;
  default:
    goto switchD_10038bc4_caseD_d;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    *(undefined4 *)((int)param_2 + 4) = 4;
    puVar3 = param_2 + 1;
    local_28 = *(undefined4 *)((int)&DAT_100b3c90 + param_3 * 4);
    goto LAB_10038c28;
  case 0x13:
    uVar2 = 0x5956595500000004;
    goto LAB_10038cf4;
  case 0x14:
    uVar2 = 0x3259555900000004;
LAB_10038cf4:
    *(undefined8 *)((int)param_2 + 4) = uVar2;
    return param_2;
  case 0x17:
    *(undefined4 *)((int)param_2 + 4) = 0x400;
    uVar1 = 0x10;
    goto LAB_10038d18;
  case 0x18:
    *(undefined4 *)((int)param_2 + 4) = 0x400;
    uVar1 = 0x18;
LAB_10038d18:
    *(undefined4 *)((int)param_2 + 0xc) = uVar1;
LAB_10038d7c:
    *(undefined4 *)((int)param_2 + 0x14) = local_30;
    puVar3 = param_2 + 3;
    goto LAB_10038d8c;
  case 0x19:
    *(undefined4 *)((int)param_2 + 4) = 0x4400;
    uVar2 = 0x800000020;
    goto LAB_10038d48;
  case 0x1a:
    *(undefined4 *)((int)param_2 + 4) = 0x4400;
    uVar2 = 0x400000020;
LAB_10038d48:
    *(undefined8 *)((int)param_2 + 0xc) = uVar2;
    goto LAB_10038d7c;
  case 0x1b:
    *(undefined4 *)((int)param_2 + 4) = 0x400;
    *(undefined4 *)((int)param_2 + 0xc) = 0x20;
    goto LAB_10038d7c;
  }
  *(undefined4 *)((int)param_2 + 4) = uVar1;
  uVar1 = 0x10;
LAB_10038c40:
  *(undefined4 *)((int)param_2 + 0xc) = uVar1;
LAB_10038c48:
  *(undefined4 *)(param_2 + 2) = local_30;
  *(undefined4 *)((int)param_2 + 0x14) = uStack_2c;
  *(undefined4 *)(param_2 + 3) = local_28;
  puVar3 = (undefined8 *)((int)param_2 + 0x1c);
  uStack_2c = uStack_24;
LAB_10038d8c:
  *(undefined4 *)puVar3 = uStack_2c;
switchD_10038bc4_caseD_d:
  return param_2;
}

