/*
 * FUN_180212ef0 at 180212ef0
 * undefined FUN_180212ef0(void)
 * Address ranges: 180212ef0-180212fdf;180213000-180213023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180212ef0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint local_d0 [4];
  ulonglong local_c0 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [72];
  
  local_80 = 0;
  uStack_70 = 0x1032547698badcfe;
  local_78 = 0xefcdab8967452301;
  *(int *)(*param_1 + 0x18) = (int)param_1[1] - (int)*param_1;
  lVar1 = *param_1;
  iVar4 = (int)param_1[1] - (int)lVar1;
  uVar2 = iVar4 - 0x14;
  uVar5 = (ulonglong)(uVar2 & 0xffffffc0);
  uVar3 = iVar4 * 8 - 0xa0;
  local_d0[0] = uVar3;
  FUN_18021e420(&local_80,lVar1 + 0x14,uVar5);
  uVar2 = uVar2 & 0x3f;
  uVar5 = uVar5 | 0x14;
  if (0x37 < uVar2) {
    FUN_18021e420(&local_80,uVar5 + lVar1,uVar2);
    FUN_18021e420(&local_80,&DAT_18024c820,0x40 - uVar2);
    local_c0[1] = 0;
    local_c0[3] = 0;
    local_c0[2] = 0;
    local_c0[5] = 0;
    local_c0[4] = 0;
    local_c0[6] = 0;
    local_c0[0] = (ulonglong)uVar3;
    local_c0[7] = (ulonglong)((uVar3 | 4) >> 2) << 0x20;
    FUN_18021d9f8(&local_78,local_c0);
    *(undefined8 *)(lVar1 + 0xc) = uStack_70;
    *(undefined8 *)(lVar1 + 4) = local_78;
    return;
  }
  FUN_18021e420(&local_80,local_d0,4);
  if (uVar2 != 0) {
    FUN_18021e420(&local_80,uVar5 + lVar1,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(auStack_68 + (uVar2 + 4),&DAT_18024c820,0x3c - uVar2);
}

