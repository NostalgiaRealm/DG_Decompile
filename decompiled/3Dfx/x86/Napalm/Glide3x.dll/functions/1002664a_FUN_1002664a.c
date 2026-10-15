/*
 * FUN_1002664a at 1002664a
 * undefined __fastcall FUN_1002664a(int * param_1, int param_2, uint param_3, byte param_4, byte param_5, char param_6)
 * Address ranges: 1002664a-10026941
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1002664a(int *param_1,int param_2,uint param_3,byte param_4,byte param_5,char param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  longlong lVar7;
  
  piVar6 = param_1 + 0x55;
  if (param_2 == 1) {
    piVar6 = param_1 + 0x5d;
  }
  else if (param_2 == 2) {
    piVar6 = param_1 + 0x65;
  }
  if ((((ushort)param_3 & 0xff0) != 0x100) &&
     (((uVar2 = param_3 & 0xf00, uVar2 == 0x100 || (uVar2 == 0x200)) || (uVar2 == 0x500)))) {
    param_5 = param_5 ^ 1;
  }
  uVar2 = param_3 & 0xf;
  bVar5 = param_4;
  if ((param_3 & 0x1000) != 0) {
    bVar5 = 0xff;
  }
  uVar3 = param_3 & 0xf0;
  if (uVar3 < 0x41) {
    if (uVar3 != 0x40) {
      if (uVar3 == 0) {
LAB_10026767:
        uVar1 = (ushort)param_3 & 0xf00;
        if (uVar1 == 0x100) {
          _param_4 = 1.0;
        }
        else if (uVar1 == 0x300) {
          _param_4 = -0.5;
        }
        else {
          _param_4 = 0.0;
        }
        if ((param_3 & 0x2000) != 0) {
          _param_4 = _param_4 * 255.0;
        }
        if (param_6 != '\0') {
          lVar7 = FUN_10056570();
          FUN_10026a0b(piVar6,(int)lVar7,bVar5);
          return;
        }
        if (param_5 != 0) {
          _param_4 = -_param_4;
        }
        FUN_100269ca(piVar6,bVar5,(int)_param_4);
        return;
      }
      if (uVar3 == 0x10) {
        *piVar6 = 2;
        uVar3 = FUN_1004e895(0,bVar5,1,4,0,0,0);
        piVar6[1] = uVar3;
        piVar6[2] = (uint)*(byte *)(param_1 + uVar2 + 0x21);
        goto LAB_10026915;
      }
      if ((uVar3 != 0x20) && (uVar3 != 0x30)) goto LAB_10026915;
      uVar2 = *(uint *)((int)param_1 +
                       uVar2 * 4 + ((((byte)param_3 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
      if (uVar2 == 0) goto LAB_10026767;
      *piVar6 = 2;
      iVar4 = FUN_1004e026(uVar2,0,1,4,0,0);
      piVar6[1] = iVar4;
      uVar2 = uVar2 & 0xff;
LAB_1002672d:
      piVar6[2] = uVar2;
      goto LAB_10026915;
    }
    *piVar6 = 2;
    uVar2 = FUN_1004e895(1,bVar5,1,4,0,0,0);
    piVar6[2] = 2;
  }
  else {
    if (uVar3 != 0x50) {
      if (uVar3 == 0x60) {
        param_1[2] = param_1[2] | 1;
        _param_4 = (float)(uVar2 * 0x250 + 0x180 >> 4);
        if (*param_1 == 0x51) {
          piVar6[4] = (int)_param_4;
          _param_4 = 0.0;
          iVar4 = 4;
        }
        else {
          iVar4 = 3;
        }
        *piVar6 = iVar4;
        uVar2 = FUN_1004e895(8,bVar5,2,4,0,0,0);
        piVar6[1] = uVar2;
        piVar6[2] = 0;
        piVar6[3] = (int)_param_4;
        goto LAB_10026915;
      }
      if (uVar3 == 0x80) {
        *piVar6 = 2;
        iVar4 = FUN_1004e026(param_1[uVar2 + 0x24],bVar5,1,4,0,0);
        piVar6[1] = iVar4;
        uVar2 = (uint)*(byte *)(param_1 + uVar2 + 0x24);
      }
      else {
        if (uVar3 != 0xf0) goto LAB_10026915;
        *piVar6 = 2;
        iVar4 = FUN_1004e026(param_1[0x28],bVar5,1,4,0,0);
        piVar6[1] = iVar4;
        uVar2 = (uint)*(byte *)(param_1 + 0x28);
      }
      goto LAB_1002672d;
    }
    param_1[2] = param_1[2] | 1;
    iVar4 = *param_1;
    piVar6[2] = 0;
    if (iVar4 == 0x51) {
      *piVar6 = 4;
      uVar2 = FUN_1004e895(8,bVar5,3,4,0,0,0);
      piVar6[3] = 0;
      piVar6[4] = 5;
    }
    else {
      *piVar6 = 3;
      uVar2 = FUN_1004e895(8,bVar5,2,4,0,0,0);
      piVar6[3] = 5;
    }
  }
  piVar6[1] = uVar2;
LAB_10026915:
  if (param_5 != 0) {
    for (iVar4 = *piVar6; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar6[iVar4 + 1] = piVar6[iVar4];
    }
    piVar6[1] = piVar6[1] | 0x80000000;
    *piVar6 = *piVar6 + 1;
    piVar6[2] = 0x41;
  }
  return;
}

