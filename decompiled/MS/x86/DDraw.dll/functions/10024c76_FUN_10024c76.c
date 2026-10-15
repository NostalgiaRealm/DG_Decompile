/*
 * FUN_10024c76 at 10024c76
 * undefined4 * __thiscall FUN_10024c76(void * this, undefined4 * param_1, int param_2)
 * Address ranges: 10024c76-10024df6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10024c76(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar3 = param_1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = **(int **)((int)this + 0x118);
  *param_1 = 0x20;
  (**(code **)(iVar2 + 0x20))(&local_14,param_2);
  switch(param_2) {
  case 0:
    param_1[1] = 0x60;
    goto LAB_10024cbc;
  case 1:
  case 2:
    param_1[1] = 0x40;
    goto LAB_10024d0f;
  case 3:
  case 4:
    param_1[1] = 0x41;
    goto LAB_10024d0f;
  case 5:
    param_1[1] = 0x40;
    goto LAB_10024cd5;
  case 6:
    param_1[1] = 0x41;
LAB_10024cd5:
    param_1[3] = 0x20;
    goto LAB_10024d16;
  case 7:
    param_1[1] = 0x20000;
LAB_10024cbc:
    param_1[3] = 8;
    goto LAB_10024d16;
  case 8:
    param_1[1] = 2;
    param_1[3] = 8;
    break;
  case 9:
    param_1[1] = 0x20001;
LAB_10024d0f:
    param_1[3] = 0x10;
LAB_10024d16:
    param_1[4] = local_14;
    param_1[5] = local_10;
    param_1[6] = local_c;
    param_1[7] = local_8;
    break;
  case 10:
    param_1[1] = 0x80000;
    param_1[3] = 0x10;
    goto LAB_10024d56;
  case 0xb:
    param_1[3] = 0x10;
    goto LAB_10024d4f;
  case 0xc:
    param_1[3] = 0x20;
LAB_10024d4f:
    param_1[1] = 0xc0000;
LAB_10024d56:
    param_1[4] = local_14;
    param_1[5] = local_10;
    param_1[6] = local_c;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    uVar1 = *(undefined4 *)("DllCanUnloadNow" + param_2 * 4 + 8);
    param_1[1] = 4;
    param_1[2] = uVar1;
    break;
  case 0x13:
    param_1[1] = 4;
    param_1[2] = 0x59565955;
    break;
  case 0x14:
    param_1[1] = 4;
    param_1[2] = 0x32595559;
    break;
  case 0x17:
    param_1[3] = 0x10;
    goto LAB_10024ddb;
  case 0x18:
    param_1[3] = 0x18;
    goto LAB_10024ddb;
  case 0x19:
    param_1[1] = 0x4400;
    param_1[3] = 0x20;
    param_1[4] = 8;
    goto LAB_10024de2;
  case 0x1a:
    param_1[1] = 0x4400;
    param_1[3] = 0x20;
    param_1[4] = 4;
    goto LAB_10024de2;
  case 0x1b:
    param_1[3] = 0x20;
LAB_10024ddb:
    param_1[1] = 0x400;
LAB_10024de2:
    param_1[5] = local_14;
    param_1[6] = local_10;
  }
  return param_1;
}

