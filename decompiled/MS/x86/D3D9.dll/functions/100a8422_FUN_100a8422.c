/*
 * FUN_100a8422 at 100a8422
 * undefined1 __fastcall FUN_100a8422(undefined4 * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 100a8422-100a8579
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_100a8422(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint local_c;
  undefined4 *local_8;
  
  cVar1 = '\x01';
  uVar5 = 0;
  local_c = 0;
  local_8 = param_1;
  do {
    uVar2 = (**(code **)(*param_2 + 0x14))();
    if (uVar2 <= uVar5) {
      return cVar1;
    }
    pbVar3 = (byte *)(**(code **)(*param_2 + 0x18))(uVar5);
    if (pbVar3 == (byte *)0x0) {
      uVar2 = FUN_100a51ee(param_2,uVar5,(int *)&local_c);
      cVar1 = (char)uVar2;
    }
    else {
      iVar4 = FUN_100d03d3(pbVar3,(byte *)"general");
      if (iVar4 == 0) {
        cVar1 = FUN_100a5353(param_3,local_8,param_2,uVar5,local_c);
      }
      else {
        iVar4 = FUN_100d03d3(pbVar3,(byte *)"glide");
        if (iVar4 == 0) {
          cVar1 = FUN_100a59a1(param_3,(int)local_8,param_2,uVar5,local_c);
        }
        else {
          iVar4 = FUN_100d03d3(pbVar3,(byte *)"directx");
          if (iVar4 == 0) {
            cVar1 = FUN_100a6135(param_3,(int)local_8,param_2,uVar5,local_c);
          }
          else {
            pcVar6 = "glideext";
            iVar4 = FUN_100d03d3(pbVar3,(byte *)"glideext");
            if (iVar4 == 0) {
              cVar1 = FUN_100a5f40(pcVar6,(int)local_8,param_2,uVar5);
            }
            else {
              iVar4 = FUN_100d03d3(pbVar3,(byte *)"directxext");
              if (iVar4 == 0) {
                cVar1 = FUN_100a6964(param_3,(int)local_8,param_2,uVar5,local_c);
              }
              else {
                iVar4 = FUN_100d03d3(pbVar3,(byte *)"generalext");
                if (iVar4 == 0) {
                  cVar1 = FUN_100a76f0(param_3,(int)local_8,param_2,uVar5,local_c);
                }
                else {
                  pcVar6 = "debug";
                  iVar4 = FUN_100d03d3(pbVar3,(byte *)"debug");
                  if (iVar4 != 0) {
                    return 0;
                  }
                  cVar1 = FUN_100a82b4(pcVar6,(int)local_8,param_2,uVar5);
                }
              }
            }
          }
        }
      }
    }
    uVar5 = uVar5 + 1;
  } while (cVar1 != '\0');
  return 0;
}

