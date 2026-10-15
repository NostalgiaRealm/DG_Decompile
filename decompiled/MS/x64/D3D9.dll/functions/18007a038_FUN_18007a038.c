/*
 * FUN_18007a038 at 18007a038
 * uint __fastcall FUN_18007a038(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4, byte param_5, uint param_6, char param_7, char param_8, char param_9)
 * Address ranges: 18007a038-18007aab5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18007a038(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4,byte param_5,
                  uint param_6,char param_7,char param_8,char param_9)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  
  uVar2 = (uint)(byte)(&DAT_1800fe880)[(ulonglong)param_5 * 2];
  if (param_7 == '\0') {
    if (param_8 == '\0') {
      if ((param_9 == '\0') && (bVar7 = true, param_6 == 0)) goto LAB_18007a98f;
      if (param_6 == 0) {
        param_6 = FUN_1800ec8c0(param_3 + 0x20,uVar2,'\x01');
      }
      if (param_9 != '\0') {
        FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x33,(ulonglong)param_6);
        goto LAB_18007a98d;
      }
LAB_18007a965:
      uVar2 = 0x36;
    }
    else {
      if (param_6 == 0) {
        param_6 = FUN_1800ec8c0(param_3 + 0x20,uVar2,'\x01');
      }
      uVar2 = 0x42;
    }
LAB_18007a96b:
    FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,uVar2,(ulonglong)param_6);
  }
  else {
    if (param_7 == '\x02') {
      if (param_8 != '\0') {
LAB_18007a956:
        bVar7 = true;
        if (param_6 == 0) goto LAB_18007a98f;
        goto LAB_18007a965;
      }
      if (param_6 == 0) {
        param_6 = FUN_1800ec8c0(param_3 + 0x20,uVar2,'\x01');
      }
      uVar2 = 0x56;
      goto LAB_18007a96b;
    }
    if (param_7 == '\x03') {
      if (param_8 != '\0') goto LAB_18007a956;
      if (param_6 == 0) {
        param_6 = FUN_1800ec8c0(param_3 + 0x20,uVar2,'\x01');
      }
      uVar2 = 0x2b;
      goto LAB_18007a96b;
    }
    if (param_7 == '\x04') {
      if (param_8 == '\0') {
        if (param_6 == 0) {
          param_6 = FUN_1800ec8c0(param_3 + 0x20,uVar2,'\x01');
        }
        if ((param_5 & 7) != 0) {
          FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x2b,(ulonglong)param_6);
        }
        if ((param_5 & 8) != 0) goto LAB_18007a8f2;
      }
      else if ((param_5 & 8) != 0) {
        if (param_6 == 0) {
          param_6 = FUN_1800ec8c0(param_3 + 0x20,uVar2,'\x01');
        }
        if ((param_5 & 7) != 0) {
          FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x36,(ulonglong)param_6);
        }
LAB_18007a8f2:
        FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x36,(ulonglong)param_6);
      }
    }
    else {
      if (param_7 == '\x05') {
        if (param_6 == 0) {
          param_6 = FUN_1800ec8c0(param_3 + 0x20,uVar2,'\x01');
        }
        puVar6 = (uint *)(param_3 + 0x20);
        uVar2 = param_6;
        if ((param_5 & 7) != 0) {
          uVar3 = FUN_1800ee040(*puVar6);
          if ((uint)uVar3 < 0x50) {
            if ((param_6 & 0x3f00) != 0) {
              uVar2 = FUN_1800ec8c0((longlong)puVar6,3,'\x01');
              puVar6 = (uint *)(param_3 + 0x20);
            }
            if ((param_5 & 1) != 0) {
              FUN_1800edbe0(puVar6,param_2,0x36,(ulonglong)uVar2);
            }
            if ((param_5 & 2) != 0) {
              FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x55,(ulonglong)uVar2);
            }
            if ((param_5 & 4) != 0) {
              FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x55,(ulonglong)uVar2);
            }
            uVar1 = param_6;
            if (param_8 == '\0') {
              uVar1 = uVar2;
            }
            FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,1,(ulonglong)uVar1);
          }
          else {
            if ((param_8 == '\0') && ((param_6 & 0x3f00) != 0)) {
              uVar2 = FUN_1800ec8c0((longlong)puVar6,3,'\x01');
              puVar6 = (uint *)(param_3 + 0x20);
            }
            FUN_1800edbe0(puVar6,param_2,0x8a,(ulonglong)uVar2);
          }
          if (param_8 == '\0') {
            FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x56,(ulonglong)param_6);
          }
        }
      }
      else {
        if (param_7 != '\x06') {
          if (param_7 == -1) {
            if (param_6 == 0) {
              param_6 = FUN_1800ec8c0(param_3 + 0x20,
                                      (uint)(byte)(&DAT_1800fe880)[(ulonglong)param_5 * 2],'\x01');
            }
            FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x36,(ulonglong)param_6);
          }
          goto LAB_18007a98d;
        }
        if (param_6 == 0) {
          param_6 = FUN_1800ec8c0(param_3 + 0x20,uVar2,'\x01');
        }
        puVar6 = (uint *)(param_3 + 0x20);
        bVar4 = param_5 & 7;
        uVar2 = param_6;
        if ((bVar4 != 0) && ((param_6 & 0x3f00) != 0)) {
          uVar2 = FUN_1800ec8c0((longlong)puVar6,3,'\x01');
        }
        puVar5 = (uint *)(param_3 + 0x20);
        uVar3 = FUN_1800ee040(*puVar5);
        if ((uint)uVar3 < 0x50) {
          if ((param_5 & 1) != 0) {
            FUN_1800edbe0(puVar5,param_2,0x29,(ulonglong)uVar2);
            puVar5 = (uint *)(param_3 + 0x20);
          }
          if ((param_5 & 2) != 0) {
            FUN_1800edbe0(puVar5,param_2,0x29,(ulonglong)uVar2);
          }
          if ((param_5 & 4) != 0) {
            FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x29,(ulonglong)uVar2);
          }
LAB_18007a333:
          if ((param_5 & 7) == 0) goto joined_r0x00018007a7ab;
        }
        else {
          if (bVar4 == 0) goto LAB_18007a333;
          FUN_1800edbe0(puVar5,param_2,0x29,(ulonglong)uVar2);
        }
        FUN_1800edbe0(puVar6,param_2,0x2a,(ulonglong)uVar2);
        FUN_1800edbe0(puVar6,param_2,0x2b,(ulonglong)uVar2);
        uVar1 = param_6;
        if (param_8 != '\0') {
          uVar1 = uVar2;
        }
        FUN_1800edbe0(puVar6,param_2,0x38,(ulonglong)uVar1);
        if (param_8 != '\0') {
          FUN_1800edbe0(puVar6,param_2,0x1b,(ulonglong)param_6);
        }
      }
joined_r0x00018007a7ab:
      if ((param_5 & 8) != 0) {
        FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x36,(ulonglong)param_6);
      }
      if (uVar2 != param_6) {
        FUN_1800ec960(param_3 + 0x20,uVar2);
      }
    }
  }
LAB_18007a98d:
  bVar7 = param_6 == 0;
LAB_18007a98f:
  if (!bVar7) {
    param_4 = param_6;
  }
  return param_4;
}

