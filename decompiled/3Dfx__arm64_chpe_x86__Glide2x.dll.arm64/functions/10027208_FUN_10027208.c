/*
 * FUN_10027208 at 10027208
 * undefined FUN_10027208(void)
 * Address ranges: 10027208-1002729f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027208(int param_1,int param_2,undefined4 param_3,undefined8 *param_4,int param_5,
                 int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_3) {
  case 0:
    puVar1 = (undefined8 *)(param_1 + param_2 * 0x4e8 + 0x2a8);
    break;
  case 1:
    puVar1 = (undefined8 *)(param_1 + param_2 * 0x4e8 + 0x318);
    break;
  case 2:
    if (param_4 != (undefined8 *)0x0) {
      FUN_1007a780(param_1 + (param_5 + param_2 * 0x13a + 0xe2) * 4,(int)param_4 + param_5 * 4,
                   ((ulonglong)(uint)(param_6 - param_5) & 0x3fffffff) << 2);
      return;
    }
  default:
    goto switchD_10027224_default;
  }
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = *param_4;
    uVar3 = param_4[3];
    uVar2 = param_4[2];
    puVar1[1] = param_4[1];
    *puVar1 = uVar4;
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
    uVar4 = param_4[4];
    uVar3 = param_4[7];
    uVar2 = param_4[6];
    puVar1[5] = param_4[5];
    puVar1[4] = uVar4;
    puVar1[7] = uVar3;
    puVar1[6] = uVar2;
    uVar4 = param_4[8];
    uVar3 = param_4[0xb];
    uVar2 = param_4[10];
    puVar1[9] = param_4[9];
    puVar1[8] = uVar4;
    puVar1[0xb] = uVar3;
    puVar1[10] = uVar2;
    uVar2 = param_4[0xc];
    puVar1[0xd] = param_4[0xd];
    puVar1[0xc] = uVar2;
  }
switchD_10027224_default:
  return;
}

