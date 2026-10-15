/*
 * _gu3dfLoad@8_native at 100058a0
 * undefined _gu3dfLoad@8_native(void)
 * Address ranges: 100058a0-100059b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 _gu3dfLoad_8_native(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_40 [2];
  undefined1 auStack_38 [24];
  
  FUN_10008af8(auStack_38,param_1);
  iVar6 = FUN_100084e0(auStack_38,param_2);
  if (iVar6 != 0) {
    FUN_10008bb0(auStack_38,iVar6,0,0);
    local_40[0] = 0;
    puVar4 = (uint *)(param_2 + 0x41c);
    FUN_10008c40(auStack_38,*puVar4,*(int *)(param_2 + 0x418),local_40);
    if ((int)(*puVar4 - 7) <= local_40[0]) {
      if (*(int *)(param_2 + 0x14) - 8U < 7) {
        iVar6 = *(int *)(param_2 + 0x418);
        uVar7 = 0;
        if ((*puVar4 & 0xfffffffc) != 0) {
          do {
            iVar1 = uVar7 * 4;
            puVar5 = (uint *)(iVar6 + uVar7 * 4);
            iVar2 = uVar7 * 4;
            iVar3 = uVar7 * 4;
            uVar7 = uVar7 + 1;
            *puVar5 = (uint)*(byte *)(iVar6 + 1 + iVar3) |
                      (*puVar5 & 0xff |
                      (uint)CONCAT11(*(undefined1 *)(iVar6 + 2 + iVar1),
                                     *(undefined1 *)(iVar6 + 3 + iVar2)) << 8) << 8;
          } while (uVar7 < *puVar4 >> 2);
        }
      }
      uVar8 = 1;
      goto LAB_10005998;
    }
  }
  uVar8 = 0;
LAB_10005998:
  FUN_10008b70(auStack_38);
  return uVar8;
}

