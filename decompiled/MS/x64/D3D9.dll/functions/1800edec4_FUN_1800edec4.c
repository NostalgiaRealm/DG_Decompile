/*
 * FUN_1800edec4 at 1800edec4
 * undefined __fastcall FUN_1800edec4(longlong * param_1)
 * Address ranges: 1800edec4-1800ee03d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800edec4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint local_res8 [2];
  uint local_b8 [6];
  undefined8 local_a0 [4];
  undefined8 local_80;
  undefined8 uStack_6c;
  uint local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_24;
  uint local_1c;
  
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0x67452301;
  *(int *)(*param_1 + 0x18) = (int)param_1[1] - (int)*param_1;
  lVar2 = *param_1;
  iVar3 = (int)param_1[1] - (int)lVar2;
  local_b8[3] = 0xefcdab89;
  local_b8[4] = 0x98badcfe;
  local_b8[5] = 0x10325476;
  uVar1 = iVar3 * 8 - 0xa0;
  uVar6 = iVar3 - 0x14;
  uVar4 = uVar6 & 0xffffffc0;
  local_res8[0] = uVar1;
  FUN_1800f6668(local_b8,(undefined1 *)(lVar2 + 0x14),(ulonglong)uVar4);
  puVar5 = (undefined1 *)(((ulonglong)uVar4 | 0x14) + lVar2);
  uVar6 = uVar6 & 0x3f;
  if (uVar6 < 0x38) {
    FUN_1800f6668(local_b8,(undefined1 *)local_res8,4);
    if (uVar6 != 0) {
      FUN_1800f6668(local_b8,puVar5,(ulonglong)uVar6);
    }
    FUN_1800fbec0((undefined8 *)((longlong)local_a0 + (ulonglong)(uVar6 + 4)),
                  (undefined8 *)&DAT_1801119e0,(ulonglong)(0x3c - uVar6));
    local_1c = (uVar1 | 4) >> 2;
    local_58 = local_a0[0];
    uStack_50 = local_a0[1];
    local_48 = local_a0[2];
    uStack_40 = local_a0[3];
    local_38 = local_80;
    uStack_24 = uStack_6c;
    local_64 = local_1c;
  }
  else {
    FUN_1800f6668(local_b8,puVar5,(ulonglong)uVar6);
    FUN_1800f6668(local_b8,&DAT_1801119e0,(ulonglong)(0x40 - uVar6));
    FUN_1800fbea0((undefined1 *)&local_58,0,0x40);
    local_58 = CONCAT44(local_58._4_4_,uVar1);
    local_1c = (uVar1 | 4) >> 2;
  }
  FUN_1800f5df0((int *)(local_b8 + 2),(int *)&local_58);
  *(uint *)(lVar2 + 4) = local_b8[2];
  *(uint *)(lVar2 + 8) = local_b8[3];
  *(uint *)(lVar2 + 0xc) = local_b8[4];
  *(uint *)(lVar2 + 0x10) = local_b8[5];
  return;
}

