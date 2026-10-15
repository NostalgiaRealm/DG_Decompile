/*
 * FUN_1000a688 at 1000a688
 * undefined1 __fastcall FUN_1000a688(undefined4 param_1, int param_2, int * param_3, undefined4 param_4)
 * Address ranges: 1000a688-1000a7f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined1 __fastcall FUN_1000a688(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  
  cVar2 = '\x01';
  uVar9 = 0;
  do {
    uVar3 = (**(code **)(*param_3 + 0x1c))(param_4);
    if (uVar3 <= uVar9) {
      return cVar2;
    }
    pbVar4 = (byte *)(**(code **)(*param_3 + 0x20))(param_4,uVar9);
    iVar5 = (**(code **)(*param_3 + 0x24))(param_4,uVar9);
    iVar6 = (**(code **)(*param_3 + 0x30))(param_4,uVar9);
    pcVar10 = "info";
    iVar7 = FUN_1004f6cb(pbVar4,&DAT_100534c4);
    puVar1 = (undefined4 *)(param_2 + 0x1fb);
    if (iVar7 == 0) {
joined_r0x1000a772:
      if ((iVar6 == 0) && (iVar5 != 0)) {
        uVar8 = FUN_1000a616(pcVar10,param_3,param_4,uVar9,puVar1,iVar5);
        cVar2 = (char)uVar8;
      }
    }
    else {
      pcVar10 = "warning";
      iVar7 = FUN_1004f6cb(pbVar4,(byte *)"warning");
      puVar1 = (undefined4 *)(param_2 + 0x1ff);
      if (iVar7 == 0) goto joined_r0x1000a772;
      pcVar10 = "error";
      iVar7 = FUN_1004f6cb(pbVar4,(byte *)"error");
      puVar1 = (undefined4 *)(param_2 + 0x203);
      if (iVar7 == 0) goto joined_r0x1000a772;
      iVar7 = FUN_1004f6cb(pbVar4,(byte *)"maxtracelevel");
      if (iVar7 == 0) {
        if ((iVar6 == 0) && (iVar5 == 1)) {
          cVar2 = (**(code **)(*param_3 + 0x2c))(param_4,uVar9,0,param_2 + 0x207);
        }
      }
      else {
        pcVar10 = "logtofile";
        iVar7 = FUN_1004f6cb(pbVar4,(byte *)"logtofile");
        if (iVar7 != 0) {
          return 0;
        }
        if ((iVar6 == 0) && (iVar5 != 0)) {
          uVar8 = FUN_1000728f(pcVar10,param_3,param_4,uVar9,(undefined1 *)(param_2 + 0x20b),iVar5);
          cVar2 = (char)uVar8;
        }
      }
    }
    uVar9 = uVar9 + 1;
    if (cVar2 == '\0') {
      return 0;
    }
  } while( true );
}

