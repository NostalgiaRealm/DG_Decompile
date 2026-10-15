/*
 * FUN_180040e54 at 180040e54
 * longlong __fastcall FUN_180040e54(undefined8 param_1, int * param_2)
 * Address ranges: 180040e54-1800410bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180040e54(undefined8 param_1,int *param_2)

{
  return (((((((((ulonglong)
                 (-(uint)(param_2[1] != 0) & 0x20000 | -(uint)(*param_2 != 0) & 0x10000 |
                 *(byte *)(param_2 + 0x29) & 0xf) << 4 |
                (ulonglong)(*(byte *)(param_2 + 0x1f) & 0xf)) << 4 |
               (ulonglong)(*(byte *)(param_2 + 0x15) & 0xf)) << 4 |
              (ulonglong)(*(byte *)(param_2 + 0xb) & 0xf)) << 0xc | (ulonglong)(param_2[0x28] & 0xf)
             ) << 4 | (ulonglong)(param_2[0x1e] & 0xf)) << 4 | (ulonglong)(param_2[0x14] & 0xf)) <<
           4 | (ulonglong)(param_2[10] & 0xf)) << 10 |
          (ulonglong)(-(uint)(param_2[0x21] != 0) & 0x200) |
          (ulonglong)(-(uint)(param_2[0x20] != 0) & 0x100) |
          (ulonglong)(-(uint)(param_2[0x17] != 0) & 0x80) |
          (ulonglong)(-(uint)(param_2[0x16] != 0) & 0x40) |
          (ulonglong)(-(uint)(param_2[0xd] != 0) & 0x20) |
          (ulonglong)(-(uint)(param_2[0xc] != 0) & 0x10) | (ulonglong)(-(uint)(param_2[3] != 0) & 8)
         | (ulonglong)(-(uint)(param_2[2] != 0) & 4)) +
         (((((((ulonglong)(param_2[0x27] & 7) << 5 | (ulonglong)(uint)param_2[0x26] & 0x1f) << 5 |
             (ulonglong)(uint)param_2[0x25] & 0x1f) << 3 | (ulonglong)(param_2[0x24] & 7)) << 5 |
           (ulonglong)(uint)param_2[0x23] & 0x1f) << 5 | (ulonglong)(uint)param_2[0x22] & 0x1f) <<
          0x20 | (ulonglong)
                 ((param_2[0x19] & 0x1fU |
                  ((((param_2[0x1d] & 7U) << 5 | param_2[0x1c] & 0x1fU) << 5 | param_2[0x1b] & 0x1fU
                   ) << 3 | param_2[0x1a] & 7U) << 5) << 5) | (ulonglong)(uint)param_2[0x18] & 0x1f)
         + (((((((ulonglong)(param_2[0x13] & 7) << 5 | (ulonglong)(uint)param_2[0x12] & 0x1f) << 5 |
               (ulonglong)(uint)param_2[0x11] & 0x1f) << 3 | (ulonglong)(param_2[0x10] & 7)) << 5 |
             (ulonglong)(uint)param_2[0xf] & 0x1f) << 5 | (ulonglong)(uint)param_2[0xe] & 0x1f) <<
            0x20 | (ulonglong)
                   ((param_2[5] & 0x1fU |
                    ((((param_2[9] & 7U) << 5 | param_2[8] & 0x1fU) << 5 | param_2[7] & 0x1fU) << 3
                    | param_2[6] & 7U) << 5) << 5) | (ulonglong)(uint)param_2[4] & 0x1f);
}

