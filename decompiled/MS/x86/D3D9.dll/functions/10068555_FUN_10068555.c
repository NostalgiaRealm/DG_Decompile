/*
 * FUN_10068555 at 10068555
 * uint __stdcall FUN_10068555(int * param_1, int param_2, uint param_3, uint param_4, uint param_5, char param_6, char param_7, char param_8)
 * Address ranges: 10068555-10068cb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10068555(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,char param_6,
                 char param_7,char param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)(byte)(&DAT_100d24e8)[(param_4 & 0xff) * 2];
  if (param_6 == '\0') {
    if (param_7 == '\0') {
      if ((param_8 == '\0') && (bVar4 = true, param_5 == 0)) goto LAB_10068ca6;
      if (param_5 == 0) {
        param_5 = FUN_100c2e34(param_2 + 0x18,uVar3,'\x01');
      }
      if (param_8 != '\0') {
        FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x33);
        goto LAB_10068ca4;
      }
      uVar3 = 0x36;
    }
    else {
      if (param_5 == 0) {
        param_5 = FUN_100c2e34(param_2 + 0x18,uVar3,'\x01');
      }
      uVar3 = 0x42;
    }
LAB_10068c9c:
    FUN_100c3be1((int *)(param_2 + 0x18),param_1,uVar3);
  }
  else {
    if (param_6 == '\x02') {
      if (param_7 == '\0') {
        if (param_5 == 0) {
          param_5 = FUN_100c2e34(param_2 + 0x18,uVar3,'\x01');
        }
        uVar3 = 0x56;
      }
      else {
LAB_10068b81:
        bVar4 = true;
        if (param_5 == 0) goto LAB_10068ca6;
        uVar3 = 0x36;
      }
      goto LAB_10068c9c;
    }
    if (param_6 == '\x03') {
      if (param_7 != '\0') goto LAB_10068b81;
      if (param_5 == 0) {
        param_5 = FUN_100c2e34(param_2 + 0x18,uVar3,'\x01');
      }
      uVar3 = 0x2b;
      goto LAB_10068c9c;
    }
    if (param_6 == '\x04') {
      if (param_7 == '\0') {
        if (param_5 == 0) {
          param_5 = FUN_100c2e34(param_2 + 0x18,uVar3,'\x01');
        }
        if ((param_4 & 7) != 0) {
          FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x2b);
        }
        if ((param_4 & 8) != 0) goto LAB_10068b24;
      }
      else if ((param_4 & 8) != 0) {
        if (param_5 == 0) {
          param_5 = FUN_100c2e34(param_2 + 0x18,uVar3,'\x01');
        }
        if ((param_4 & 7) != 0) {
          FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x36);
        }
LAB_10068b24:
        FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x36);
      }
    }
    else if (param_6 == '\x05') {
      if (param_5 == 0) {
        param_5 = FUN_100c2e34(param_2 + 0x18,uVar3,'\x01');
      }
      _param_6 = param_5;
      if ((param_4 & 7) != 0) {
        uVar3 = FUN_100c3e1b(*(uint *)(param_2 + 0x18));
        _param_8 = param_5;
        if (uVar3 < 0x50) {
          if ((param_5 & 0x3f00) != 0) {
            _param_8 = FUN_100c2e34(param_2 + 0x18,3,'\x01');
          }
          if ((param_4 & 1) != 0) {
            FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x36);
          }
          if ((param_4 & 2) != 0) {
            FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x55);
          }
          if ((param_4 & 4) != 0) {
            FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x55);
          }
          FUN_100c3be1((int *)(param_2 + 0x18),param_1,1);
        }
        else {
          if ((param_7 == '\0') && ((param_5 & 0x3f00) != 0)) {
            _param_8 = FUN_100c2e34(param_2 + 0x18,3,'\x01');
          }
          FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x8a);
        }
        if (param_7 == '\0') {
          FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x56);
        }
        _param_6 = _param_8;
      }
      if ((param_4 & 8) != 0) {
        FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x36);
      }
      if (_param_6 != param_5) {
LAB_10068852:
        FUN_100c2ed2(param_2 + 0x18,_param_6);
      }
    }
    else if (param_6 == '\x06') {
      piVar1 = (int *)(param_2 + 0x18);
      uVar2 = param_5;
      if (param_5 == 0) {
        uVar2 = FUN_100c2e34((int)piVar1,uVar3,'\x01');
      }
      param_5 = uVar2;
      if (((param_4 & 7) != 0) && ((uVar2 & 0x3f00) != 0)) {
        param_5 = FUN_100c2e34(param_2 + 0x18,3,'\x01');
      }
      uVar3 = FUN_100c3e1b(*(uint *)(param_2 + 0x18));
      if (uVar3 < 0x50) {
        if ((param_4 & 1) != 0) {
          FUN_100c3be1(piVar1,param_1,0x29);
        }
        if ((param_4 & 2) != 0) {
          FUN_100c3be1(piVar1,param_1,0x29);
        }
        if ((param_4 & 4) != 0) {
          FUN_100c3be1(piVar1,param_1,0x29);
        }
      }
      else if ((param_4 & 7) != 0) {
        FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x29);
      }
      if ((param_4 & 7) != 0) {
        FUN_100c3be1(piVar1,param_1,0x2a);
        FUN_100c3be1(piVar1,param_1,0x2b);
        FUN_100c3be1(piVar1,param_1,0x38);
        if (param_7 != '\0') {
          FUN_100c3be1(piVar1,param_1,0x1b);
        }
      }
      if ((param_4 & 8) != 0) {
        FUN_100c3be1(piVar1,param_1,0x36);
      }
      bVar4 = param_5 != uVar2;
      _param_6 = param_5;
      param_5 = uVar2;
      if (bVar4) goto LAB_10068852;
    }
    else if (param_6 == -1) {
      if (param_5 == 0) {
        param_5 = FUN_100c2e34(param_2 + 0x18,uVar3,'\x01');
      }
      FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x36);
    }
  }
LAB_10068ca4:
  bVar4 = param_5 == 0;
LAB_10068ca6:
  if (!bVar4) {
    param_3 = param_5;
  }
  return param_3;
}

