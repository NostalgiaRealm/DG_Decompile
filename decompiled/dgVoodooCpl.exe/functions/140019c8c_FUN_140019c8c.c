/*
 * FUN_140019c8c at 140019c8c
 * char __fastcall FUN_140019c8c(undefined4 * param_1, longlong * param_2, ulonglong param_3)
 * Address ranges: 140019c8c-140019e48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_140019c8c(undefined4 *param_1,longlong *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong *plVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res20 [2];
  
  local_res20[0] = 0;
  cVar1 = '\x01';
  uVar8 = 0;
  do {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    if (uVar2 <= uVar8) {
      return cVar1;
    }
    uVar7 = (ulonglong)uVar8;
    plVar5 = param_2;
    pbVar4 = (byte *)(**(code **)(*param_2 + 0x30))();
    if (pbVar4 == (byte *)0x0) {
      cVar1 = FUN_140016798(plVar5,uVar7,param_2,uVar8,(int *)local_res20);
    }
    else {
      iVar3 = FUN_140024ce8(pbVar4,(byte *)"general");
      if (iVar3 == 0) {
        cVar1 = FUN_140016964(param_3,param_1,param_2,uVar8,local_res20[0]);
      }
      else {
        iVar3 = FUN_140024ce8(pbVar4,(byte *)"glide");
        if (iVar3 == 0) {
          cVar1 = FUN_140016fdc(param_3,(longlong)param_1,param_2,uVar8,local_res20[0]);
        }
        else {
          iVar3 = FUN_140024ce8(pbVar4,(byte *)"directx");
          if (iVar3 == 0) {
            cVar1 = FUN_1400177a0(param_3,(longlong)param_1,param_2,uVar8,local_res20[0]);
          }
          else {
            pbVar6 = pbVar4;
            iVar3 = FUN_140024ce8(pbVar4,(byte *)"glideext");
            if (iVar3 == 0) {
              cVar1 = FUN_14001758c(pbVar6,(longlong)param_1,param_2,uVar8);
            }
            else {
              iVar3 = FUN_140024ce8(pbVar4,(byte *)"directxext");
              if (iVar3 == 0) {
                cVar1 = FUN_140017fcc(param_3,(longlong)param_1,param_2,uVar8,local_res20[0]);
              }
              else {
                iVar3 = FUN_140024ce8(pbVar4,(byte *)"generalext");
                if (iVar3 == 0) {
                  cVar1 = FUN_140018d84(param_3,(longlong)param_1,param_2,uVar8,local_res20[0]);
                }
                else {
                  iVar3 = FUN_140024ce8(pbVar4,(byte *)"debug");
                  if (iVar3 != 0) {
                    return '\0';
                  }
                  cVar1 = FUN_140019ab4(pbVar4,(longlong)param_1,param_2,uVar8);
                }
              }
            }
          }
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (cVar1 != '\0');
  return '\0';
}

