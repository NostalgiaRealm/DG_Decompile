/*
 * FUN_10039a68 at 10039a68
 * undefined FUN_10039a68(void)
 * Address ranges: 10039a68-10039b47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039a68(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,ushort param_6,ushort param_7,ushort param_8,undefined8 *param_9
                 )

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *extraout_w10;
  undefined2 *extraout_w10_00;
  undefined2 *extraout_w10_01;
  undefined2 *puVar3;
  undefined2 *extraout_w11;
  undefined2 *extraout_w11_00;
  undefined8 *extraout_w12;
  undefined8 *extraout_w12_00;
  undefined8 *extraout_w12_01;
  undefined2 extraout_w13;
  
  *param_9 = 0;
  *(ushort *)((int)param_9 + 10) = param_6 | param_7 | param_8 | 0xf0;
  puVar3 = (undefined2 *)((int)param_9 + 6);
  puVar1 = (undefined2 *)((int)param_9 + 2);
  switch(param_1) {
  default:
    goto switchD_10039ab4_caseD_0;
  case 1:
    break;
  case 2:
    goto switchD_10039ab4_caseD_2;
  case 3:
    *(undefined2 *)param_9 = param_2;
    *puVar1 = param_3;
    goto switchD_10039ab4_caseD_0;
  case 4:
    *(undefined2 *)param_9 = param_2;
    *puVar1 = param_3;
    break;
  case 5:
    *(undefined2 *)param_9 = param_2;
    *puVar1 = param_3;
    goto switchD_10039ab4_caseD_2;
  case 6:
    *(undefined2 *)param_9 = param_2;
    *puVar1 = param_3;
    uVar2 = FUN_10039988(param_4,0x200);
    *extraout_w10 = uVar2;
    param_9 = extraout_w12;
    goto switchD_10039ab4_caseD_0;
  case 7:
    *puVar1 = param_3;
  case 9:
    *(undefined2 *)param_9 = param_2;
    uVar2 = FUN_10039988(param_4,0x200);
    *extraout_w10_00 = uVar2;
    param_9 = extraout_w12_00;
    param_4 = extraout_w13;
    puVar3 = extraout_w11;
    break;
  case 8:
    *puVar1 = param_3;
  case 0x10:
    *(undefined2 *)param_9 = param_2;
    uVar2 = FUN_10039988(param_4,0x200);
    *extraout_w10_01 = uVar2;
    param_9 = extraout_w12_01;
    puVar3 = extraout_w11_00;
switchD_10039ab4_caseD_2:
    *puVar3 = param_5;
    goto switchD_10039ab4_caseD_0;
  }
  *puVar3 = param_4;
switchD_10039ab4_caseD_0:
  *(undefined2 *)((int)param_9 + 0xc) = param_3;
  return;
}

