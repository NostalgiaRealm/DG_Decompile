/*
 * FUN_1006bc3e at 1006bc3e
 * undefined __stdcall FUN_1006bc3e(int param_1, int param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined1 * param_6, char param_7)
 * Address ranges: 1006bc3e-1006bdac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006bc3e(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6,char param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = 1;
  if (param_2 != 2) {
    uVar2 = 3;
  }
  *param_3 = 0;
  *param_4 = 0;
  *param_6 = 0xf;
  *param_5 = uVar2;
  if (param_7 == '\0') {
    iVar3 = 1;
    if (param_2 != 0x10) {
      iVar3 = param_2;
    }
    uVar4 = __aullshr((byte)(iVar3 << 2),*(uint *)(*(int *)(param_1 + 0x1a0) + 0x4c));
    uVar1 = FUN_100684fa((byte)uVar4 & 0xf,param_5);
    *param_6 = uVar1;
  }
  switch(param_2) {
  case 0:
    *param_3 = "POSITION";
    goto LAB_1006bda0;
  case 1:
    *param_3 = "TEXCOORD";
    *param_4 = 9;
    break;
  case 2:
    *param_3 = "TEXCOORD";
    *param_4 = 10;
    break;
  case 3:
    *param_3 = "TEXCOORD";
    *param_4 = 8;
    break;
  case 4:
    *param_3 = "TEXCOORD";
    *param_4 = 0xd;
    *param_6 = 1;
    break;
  case 5:
    *param_3 = "COLOR";
    goto LAB_1006bda0;
  case 6:
    *param_3 = "COLOR";
    goto LAB_1006bcf5;
  case 7:
    *param_3 = "TEXCOORD";
    goto LAB_1006bda0;
  case 8:
    *param_3 = "TEXCOORD";
LAB_1006bcf5:
    *param_4 = 1;
    break;
  case 9:
    *param_3 = "TEXCOORD";
    *param_4 = 2;
    break;
  case 10:
    *param_3 = "TEXCOORD";
    *param_4 = 3;
    break;
  case 0xb:
    *param_3 = "TEXCOORD";
    *param_4 = 4;
    break;
  case 0xc:
    *param_3 = "TEXCOORD";
    *param_4 = 5;
    break;
  case 0xd:
    *param_3 = "TEXCOORD";
    *param_4 = 6;
    break;
  case 0xe:
    *param_3 = "TEXCOORD";
    *param_4 = 7;
    break;
  case 0xf:
    *param_3 = "TEXCOORD";
    *param_4 = 0xb;
    break;
  case 0x11:
    *param_3 = "NFACT";
    *param_6 = 7;
LAB_1006bda0:
    *param_4 = 0;
  }
  return;
}

