/*
 * FUN_10032a48 at 10032a48
 * undefined FUN_10032a48(void)
 * Address ranges: 10032a48-10032bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032a48(int param_1,char param_2,byte param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int extraout_w10;
  int iVar6;
  int iVar7;
  
  uVar5 = FUN_1002be40(param_1,*(undefined4 *)(*(int *)(param_1 + 0x138) + 0x2964));
  iVar4 = FUN_1002be40(uVar5,*(undefined4 *)(extraout_w10 + 0x2968));
  iVar6 = 0;
  iVar7 = 0;
  do {
    if ((param_2 != '\0' || iVar6 == (int)uVar5) || iVar6 == iVar4) {
      iVar3 = iVar7 + param_1;
      pbVar1 = (byte *)(iVar3 + 0x1c2);
      if ((*pbVar1 & 1) != 0) {
        iVar2 = iVar3 + 0x140;
        if ((*(int *)(iVar3 + 0x1a4) == 0) && (*(int *)(iVar3 + 0x1a8) == 0)) {
          FUN_100319b0(param_1,iVar2,1,0);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        else {
          FUN_1002bbe8(param_1,iVar6,1,0,0,*(undefined4 *)(iVar3 + 0x160),
                       *(undefined4 *)(iVar3 + 0x164),0);
          FUN_100319b0(param_1,iVar2,1,0);
          FUN_1002b980(param_1,iVar6,*(undefined4 *)(iVar3 + 0x19c),*(undefined4 *)(iVar3 + 0x1a0),
                       *(undefined1 *)(iVar3 + 0x1bd),*(undefined1 *)(iVar3 + 0x1c1),0,0,
                       *(undefined1 *)(iVar3 + 0x1bf));
          FUN_10034c30(iVar2,*(undefined4 *)(iVar3 + 0x164));
        }
      }
      *pbVar1 = *pbVar1 | param_3;
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 0x120;
  } while (iVar6 < 3);
  return;
}

