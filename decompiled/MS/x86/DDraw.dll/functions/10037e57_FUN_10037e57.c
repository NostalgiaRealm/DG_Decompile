/*
 * FUN_10037e57 at 10037e57
 * bool __fastcall FUN_10037e57(undefined4 param_1, int param_2, int * param_3, undefined4 param_4)
 * Address ranges: 10037e57-1003804b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10037e57(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  bVar1 = true;
  uVar6 = 0;
  do {
    while( true ) {
      uVar2 = (**(code **)(*param_3 + 0x1c))(param_4);
      if (uVar2 <= uVar6) {
        return bVar1;
      }
      pbVar3 = (byte *)(**(code **)(*param_3 + 0x20))(param_4,uVar6);
      uVar2 = (**(code **)(*param_3 + 0x24))(param_4,uVar6);
      iVar4 = (**(code **)(*param_3 + 0x30))(param_4,uVar6);
      iVar5 = FUN_10061253(pbVar3,(byte *)"ditheringeffect");
      if (iVar5 == 0) break;
      iVar5 = FUN_10061253(pbVar3,(byte *)"dithering");
      if (iVar5 == 0) {
        if (iVar4 != 0) {
          return false;
        }
        if (uVar2 == 1) {
          pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar6,0);
          iVar4 = FUN_10061253(pbVar3,(byte *)"disabled");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0xeb) = 0;
          }
          else {
            iVar4 = FUN_10061253(pbVar3,(byte *)"appdriven");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0xeb) = 1;
            }
            else {
              iVar4 = FUN_10061253(pbVar3,(byte *)"forcealways");
              if (iVar4 != 0) goto LAB_10037ffd;
              *(undefined4 *)(param_2 + 0xeb) = 2;
            }
          }
          goto LAB_10037ff5;
        }
LAB_10037ffb:
        bVar1 = true;
        if (1 < uVar2) {
LAB_10037ffd:
          bVar1 = false;
        }
      }
      else {
        pcVar7 = "ditherorderedmatrixsizescale";
        iVar5 = FUN_10061253(pbVar3,(byte *)"ditherorderedmatrixsizescale");
        if (iVar5 == 0) {
          if (iVar4 != 0) {
            return false;
          }
          bVar1 = true;
          if (uVar2 != 0) {
            bVar1 = FUN_10036e5d(pcVar7,param_3,param_4,uVar6,param_2 + 0xef,uVar2);
          }
        }
      }
      uVar6 = uVar6 + 1;
      if (bVar1 == false) {
        return false;
      }
    }
    if (iVar4 != 0) {
      return false;
    }
    if (uVar2 != 1) goto LAB_10037ffb;
    pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar6,0);
    iVar4 = FUN_10061253(pbVar3,(byte *)"pure32bit");
    if (iVar4 == 0) {
      *(undefined4 *)(param_2 + 0xe7) = 0;
    }
    else {
      iVar4 = FUN_10061253(pbVar3,(byte *)"dither2x2");
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0xe7) = 1;
      }
      else {
        iVar4 = FUN_10061253(pbVar3,(byte *)"dither4x4");
        if (iVar4 != 0) goto LAB_10037ffd;
        *(undefined4 *)(param_2 + 0xe7) = 2;
      }
    }
LAB_10037ff5:
    bVar1 = true;
    uVar6 = uVar6 + 1;
  } while( true );
}

