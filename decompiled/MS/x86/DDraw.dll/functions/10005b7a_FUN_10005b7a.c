/*
 * FUN_10005b7a at 10005b7a
 * byte __fastcall FUN_10005b7a(undefined4 param_1, undefined4 param_2, int * param_3)
 * Address ranges: 10005b7a-10005ca9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10005b7a(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  BOOL BVar2;
  byte bVar3;
  uint uVar4;
  uint in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  tagRECT local_3c;
  tagRECT local_2c [2];
  undefined4 local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  bVar3 = 1;
  local_c = param_1;
  local_8 = param_2;
  if (in_stack_00000018 != 0) {
    do {
      if (bVar3 == 0) {
        return 0;
      }
      FUN_10004989(&local_3c,1);
      bVar1 = (byte)uVar4;
      SetRect(local_2c,*in_stack_00000024 >> (bVar1 & 0x1f),in_stack_00000024[1] >> (bVar1 & 0x1f),
              in_stack_00000024[2] >> (bVar1 & 0x1f),in_stack_00000024[3] >> (bVar1 & 0x1f));
      SetRect(&local_3c,in_stack_00000034 >> (bVar1 & 0x1f),in_stack_00000038 >> (bVar1 & 0x1f),
              in_stack_0000003c >> (bVar1 & 0x1f),in_stack_00000040 >> (bVar1 & 0x1f));
      if ((in_stack_0000001c == in_stack_00000020) &&
         (((((in_stack_0000001c == 0xe || (in_stack_0000001c == 0xf)) || (in_stack_0000001c == 0x10)
            ) || ((in_stack_0000001c == 0x11 || (in_stack_0000001c == 0x12)))) ||
          ((in_stack_0000001c == 0x13 || (in_stack_0000001c == 0x14)))))) {
        local_2c[0].left = local_2c[0].left & 0xfffffffc;
        local_2c[0].right = local_2c[0].right + 3U & 0xfffffffc;
        local_2c[0].top = local_2c[0].top & 0xfffffffc;
        local_3c.left = local_3c.left & 0xfffffffc;
        local_3c.top = local_3c.top & 0xfffffffc;
        local_2c[0].bottom = local_2c[0].bottom + 3U & 0xfffffffc;
        local_3c.right = local_3c.right + 3U & 0xfffffffc;
        local_3c.bottom = local_3c.bottom + 3U & 0xfffffffc;
      }
      BVar2 = IsRectEmpty(local_2c);
      if ((BVar2 == 0) && (BVar2 = IsRectEmpty(&local_3c), BVar2 == 0)) {
        bVar1 = (**(code **)(*param_3 + 0x84))(uVar4,0,uVar4,0,local_c,local_8,&local_3c);
        bVar3 = bVar3 & bVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < in_stack_00000018);
  }
  return bVar3;
}

