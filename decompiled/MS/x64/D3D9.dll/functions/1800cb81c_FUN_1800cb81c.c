/*
 * FUN_1800cb81c at 1800cb81c
 * bool __fastcall FUN_1800cb81c(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4)
 * Address ranges: 1800cb81c-1800cba2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800cb81c(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  
  bVar1 = true;
  uVar6 = 0;
LAB_1800cb83b:
  do {
    while( true ) {
      uVar2 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
      if (uVar2 <= uVar6) {
        return bVar1;
      }
      pbVar5 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar6);
      uVar2 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar6);
      iVar3 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar6);
      iVar4 = FUN_1800fc514(pbVar5,(byte *)"ditheringeffect");
      if (iVar4 == 0) break;
      iVar4 = FUN_1800fc514(pbVar5,(byte *)"dithering");
      if (iVar4 != 0) {
        iVar4 = FUN_1800fc514(pbVar5,(byte *)"ditherorderedmatrixsizescale");
        if (iVar4 == 0) {
          if (iVar3 != 0) {
            return false;
          }
          bVar1 = true;
          if (uVar2 != 0) {
            bVar1 = FUN_1800ca684(pbVar5,param_3,param_4,uVar6,param_2 + 0xef,uVar2);
          }
        }
        goto LAB_1800cba0c;
      }
      if (iVar3 != 0) {
        return false;
      }
      if (uVar2 != 1) goto LAB_1800cb9c4;
      pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar6,0);
      iVar3 = FUN_1800fc514(pbVar5,(byte *)"disabled");
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0xeb) = 0;
      }
      else {
        iVar3 = FUN_1800fc514(pbVar5,(byte *)"appdriven");
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0xeb) = 1;
        }
        else {
          iVar3 = FUN_1800fc514(pbVar5,(byte *)"forcealways");
          if (iVar3 != 0) {
            return false;
          }
          *(undefined4 *)(param_2 + 0xeb) = 2;
        }
      }
LAB_1800cb97f:
      bVar1 = true;
      uVar6 = uVar6 + 1;
    }
    if (iVar3 != 0) {
      return false;
    }
    bVar1 = true;
    if (uVar2 == 1) {
      pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar6,0);
      iVar3 = FUN_1800fc514(pbVar5,(byte *)"pure32bit");
      if (iVar3 != 0) {
        iVar3 = FUN_1800fc514(pbVar5,(byte *)"dither2x2");
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0xe7) = 1;
        }
        else {
          iVar3 = FUN_1800fc514(pbVar5,(byte *)"dither4x4");
          if (iVar3 != 0) {
            return false;
          }
          *(undefined4 *)(param_2 + 0xe7) = 2;
        }
        goto LAB_1800cb97f;
      }
      *(undefined4 *)(param_2 + 0xe7) = 0;
      uVar6 = uVar6 + 1;
      goto LAB_1800cb83b;
    }
LAB_1800cb9c4:
    bVar1 = true;
    if (1 < uVar2) {
      bVar1 = false;
    }
LAB_1800cba0c:
    uVar6 = uVar6 + 1;
    if (bVar1 == false) {
      return false;
    }
  } while( true );
}

