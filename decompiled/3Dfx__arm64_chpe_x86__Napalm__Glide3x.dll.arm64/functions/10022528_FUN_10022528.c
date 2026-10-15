/*
 * FUN_10022528 at 10022528
 * undefined FUN_10022528(void)
 * Address ranges: 10022528-100226d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022528(int param_1,char param_2,byte param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong extraout_x9;
  int iVar7;
  int iVar8;
  
  iVar4 = FUN_1001cae0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x138) + 0x2b1c));
  iVar5 = FUN_1001cae0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x138) + 0x2b20));
  iVar7 = 0;
  iVar8 = 0;
  do {
    if ((param_2 != '\0' || iVar7 == iVar4) || iVar7 == iVar5) {
      iVar3 = iVar8 + param_1;
      pbVar1 = (byte *)(iVar3 + 0x1c2);
      if ((*pbVar1 & 1) != 0) {
        iVar2 = iVar3 + 0x140;
        uVar6 = FUN_10024800(iVar2);
        if ((uVar6 & 1) == 0) {
          FUN_10021478(param_1,extraout_x9 & 0xffffffff,1,0);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        else {
          FUN_1001c888(param_1,iVar7,1,0,0,*(undefined4 *)(iVar3 + 0x160),
                       *(undefined4 *)(iVar3 + 0x164),0);
          FUN_10021478(param_1,iVar2,1,0);
          FUN_1001c620(param_1,iVar7,*(undefined4 *)(iVar3 + 0x19c),*(undefined4 *)(iVar3 + 0x1a0),
                       *(undefined1 *)(iVar3 + 0x1bd),*(undefined1 *)(iVar3 + 0x1c1),0,0,
                       *(undefined1 *)(iVar3 + 0x1bf));
          FUN_10024768(iVar2,*(undefined4 *)(iVar3 + 0x164));
        }
      }
      *pbVar1 = *pbVar1 | param_3;
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 0x120;
  } while (iVar7 < 7);
  return;
}

